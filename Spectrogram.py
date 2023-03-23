import numpy as np
import matplotlib.pyplot as plt

# Fixing random state for reproducibility
# np.random.seed(19680801)

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


def draw(x, y, ax, ax_histx, ax_histy, ax_colormap):
    ax_histx.tick_params(axis="x", labelbottom=False)
    ax_histy.tick_params(axis="y", labelleft=False)

    Pxx, freqs, bins, im = ax.specgram(x1, NFFT=NFFT, Fs=Fs, noverlap=900)

    fft = np.fft.fft(x1)
    freq = np.fft.fftfreq(len(x1), dt)
    freq_mask = freq >= 0
    freq = freq[freq_mask]
    amp = np.abs(fft[freq_mask])

    ax_histy.plot(amp, freq)
    ax_histy.set_ylim([0, Fs / 2])

    ax_histx.plot(t, x1)

    # Display the colormap in the right window
    plt.colorbar(im, cax=ax_colormap)


fig = plt.figure(figsize=(16, 9))
gs = fig.add_gridspec(2, 3, width_ratios=(2, 8, 1), height_ratios=(4, 1),
                      left=0.1, right=0.9, bottom=0.1, top=0.9,
                      wspace=0.05, hspace=0.05)

ax = fig.add_subplot(gs[0, 1])
ax_histx = fig.add_subplot(gs[1, 1], sharex=ax)
ax_histy = fig.add_subplot(gs[0, 0], sharey=ax)
ax_colormap = fig.add_subplot(gs[0, 2])

draw(x, y, ax, ax_histx, ax_histy, ax_colormap)

# Set hard limits for zooming
ax.set_xlim(0, 20)
ax_histx.set_xlim(0, 20)

zoom_scale = 1.1

def on_key(event):
    current_xlim = ax.get_xlim()
    current_range = current_xlim[1] - current_xlim[0]
    
    if event.key == 'up':  # Zoom in
        new_range = current_range / zoom_scale
    elif event.key == 'down':  # Zoom out
        new_range = current_range * zoom_scale
    else:
        return

    # Apply hard limits
    if new_range > 20:
        new_range = 20

    center = np.mean(current_xlim)
    new_xlim = (center - new_range / 2, center + new_range / 2)
    ax.set_xlim(new_xlim)
    ax_histx.set_xlim(new_xlim)

    fig.canvas.draw()

fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()
