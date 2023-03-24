import numpy as np
import matplotlib
matplotlib.use("TkAgg")
import matplotlib.pyplot as plt

dt = 0.0005
t = np.arange(0.0, 20.0, dt)
s1 = np.sin(2 * np.pi * 100 * t)
s2 = 2 * np.sin(2 * np.pi * 400 * t)
s3 = np.sin(2 * np.pi * 400 * t)

s2[t <= 10] = s2[12 <= t] = 0

nse = 0.01 * np.random.random(size=len(t))

x1 = s1 + s2 + s3 + nse
NFFT = 1024
Fs = int(1.0 / dt)

x = np.random.randn(1000)
y = np.random.randn(1000)

colormaps = ['viridis', 'plasma', 'inferno', 'magma', 'cividis']
current_colormap_idx = 0

min_freq = 2000
max_freq = 24000

def update_colormap(ax, colormap):
    for im in ax.images:
        im.set_cmap(colormap)
    fig.canvas.draw_idle()

fig = plt.figure(figsize=(16, 9))
gs = fig.add_gridspec(3, 3, width_ratios=(2, 8, 1), height_ratios=(4, 1, 1),
                      left=0.1, right=0.9, bottom=0.1, top=0.9,
                      wspace=0.05, hspace=0.05)

ax = fig.add_subplot(gs[0, 1])
ax_histx = fig.add_subplot(gs[1, 1], sharex=ax)
ax_histy = fig.add_subplot(gs[0, 0])
ax_colormap = fig.add_subplot(gs[0, 2])

ax_time_labels = fig.add_subplot(gs[2, 1], sharex=ax_histx)
ax_time_labels.tick_params(axis="x", labelbottom=True)
ax_time_labels.tick_params(axis="y", labelleft=False, left=False)
ax_time_labels.yaxis.set_label_position("right")
ax_time_labels.set_ylabel("Time (ms)")

ax_histx.tick_params(axis="x", labelbottom=False)
ax_histy.tick_params(axis="y", labelleft=True)

Pxx, freqs, bins, im = ax.specgram(x1, NFFT=NFFT, Fs=Fs, noverlap=900, cmap=colormaps[current_colormap_idx])

fft = np.fft.fft(x1)
freq = np.fft.fftfreq(len(x1), dt)
freq_mask = freq >= 0
freq = freq[freq_mask]
amp = np.abs(fft[freq_mask])

ax_histy.plot(amp, freq)
ax_histy.set_ylim([0, Fs / 2])
ax_histy.set_ylabel('Frequency (Hz)')

ax_histx.plot(t, x1)

plt.colorbar(im, cax=ax_colormap)

ax.set_xlim(0, 20)
ax_histx.set_xlim(0, 20)

zoom_scale = 1.1

def update_time_labels():
    current_xlim = ax_histx.get_xlim()
    ax_time_labels.set_xticklabels([f"{(t - current_xlim[1]) * 1000:.0f}" for t in ax_time_labels.get_xticks()])
    fig.canvas.draw_idle()

def on_key(event):
    global current_colormap_idx

    current_xlim = ax.get_xlim()
    current_ylim = ax.get_ylim()
    current_xrange = current_xlim[1] - current_xlim[0]
    current_yrange = current_ylim[1] - current_ylim[0]

    new_xrange = current_xrange
    new_yrange = current_yrange

    if event.key == 'up':  # Zoom in on the time axis
        new_xrange = current_xrange / zoom_scale
    elif event.key == 'down':  # Zoom out on the time axis
        new_xrange = current_xrange * zoom_scale
    elif event.key == 'w':  # Zoom in on the frequency axis
        new_yrange = current_yrange / zoom_scale
    elif event.key == 'e':  # Zoom out on the frequency axis
        new_yrange = current_yrange * zoom_scale
    elif event.key == 'right':  # Cycle to the next colormap
        current_colormap_idx = (current_colormap_idx + 1) % len(colormaps)
        update_colormap(ax, colormaps[current_colormap_idx])
        return
    elif event.key == 'left':  # Cycle to the previous colormap
        current_colormap_idx = (current_colormap_idx - 1) % len(colormaps)
        update_colormap(ax, colormaps[current_colormap_idx])
        return
    else:
        return

    if new_xrange > 20:
        new_xrange = 20

    if new_yrange > max_freq:
        new_yrange = max_freq

    if new_yrange < min_freq:
        new_yrange = min_freq

    xcenter = np.mean(current_xlim)
    ycenter = np.mean(current_ylim)

    new_xlim = (xcenter - new_xrange / 2, xcenter + new_xrange / 2)
    new_ylim = (ycenter - new_yrange / 2, ycenter + new_yrange / 2)

    ax.set_xlim(new_xlim)
    ax_histx.set_xlim(new_xlim)

    ax.set_ylim(new_ylim)

    freq_mask = (freq >= new_ylim[0]) & (freq <= new_ylim[1])
    visible_freq = freq[freq_mask]
    visible_amp = amp[freq_mask]
    visible_amp = visible_amp / np.max(visible_amp) * new_yrange / 2

    ax_histy.clear()
    ax_histy.plot(visible_amp, visible_freq)
    ax_histy.set_ylim(new_ylim)
    ax_histy.set_ylabel('Frequency (Hz)')

    update_time_labels()

fig.canvas.mpl_connect('key_press_event', on_key)

update_time_labels()
plt.show()