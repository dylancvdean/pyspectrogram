import numpy as np
import matplotlib
matplotlib.use("TkAgg")
import matplotlib.pyplot as plt
from matplotlib.ticker import FixedLocator, FixedFormatter
import time

dt = 0.01  # Set the time step to 1 ms
t = np.arange(0.0, 1.0, dt)  # Set the time range to 0 to 1000 ms

NFFT = 512  # Set NFFT to a value less than the signal length (1000)
Fs = int(1.0 / dt)

colormaps = ['viridis', 'plasma', 'inferno', 'magma', 'cividis']
current_colormap_idx = 0

min_freq = 2000
max_freq = 24000

def update_colormap(ax, colormap):
    for im in ax.images:
        im.set_cmap(colormap)
    fig.canvas.draw_idle()

fig = plt.figure(figsize=(16, 9))
gs = fig.add_gridspec(2, 3, width_ratios=(2, 8, 1), height_ratios=(4, 1),
                      left=0.1, right=0.9, bottom=0.1, top=0.9,
                      wspace=0.05, hspace=0.05)

ax = fig.add_subplot(gs[0, 1])
ax_histx = fig.add_subplot(gs[1, 1], sharex=ax)
ax_histy = fig.add_subplot(gs[0, 0])
ax_colormap = fig.add_subplot(gs[0, 2])

ax.tick_params(axis="x", labelbottom=False)
ax_histy.tick_params(axis="y", labelleft=True)

Pxx, freqs, bins, im = ax.specgram(np.zeros_like(t), NFFT=NFFT, Fs=Fs, noverlap=0, cmap=colormaps[current_colormap_idx])

plt.colorbar(im, cax=ax_colormap)

ax.set_xlim(0, 1)  # Set the x-axis limits to 0 to 1000 ms
ax_histx.set_xlim(0, 1)  # Set the x-axis limits to 0 to 1000 ms
ax.set_xlabel('')  # Remove x-axis label from the spectrogram plot
ax_histx.set_xlabel('Time (ms)')  # Add x-axis label to the time domain plot

zoom_scale = 1.1

freq = None

amp = None
freq_mask = None


def update_spectrogram():
    global freq
    try:
        with open('./spec/fft', 'rb') as f:
            fft_data = np.fromfile(f, dtype=np.complex128)
    except FileNotFoundError:
        print("FFT data file not found.")
        return

    # Check if fft_data has at least two elements
    if len(fft_data) < 2:
        print("Insufficient FFT data.")
        return

    freq = np.fft.fftfreq(len(fft_data), dt)
    freq_mask = freq >= 0
    freq = freq[freq_mask]
    amp = np.abs(fft_data[freq_mask])

    Pxx, _, _, _ = ax.specgram(amp, NFFT=NFFT, Fs=Fs, noverlap=0, cmap=colormaps[current_colormap_idx])
    plt.pause(0.01)

    # Calculate the sum of amplitudes at each frequency
    summed_amplitudes = np.sum(Pxx, axis=1)

    # Update the frequency domain plot on the left
    ax_histy.clear()
    ax_histy.plot(summed_amplitudes, freqs)  # Use 'freqs' instead of 'freq'
    ax_histy.set_ylabel('Frequency (Hz)')
    ax_histy.set_xlabel('Amplitude')

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
        current_ylim = (current_ylim[0], current_ylim[1] * zoom_scale)
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

    if new_xrange > 1:  # 1000ms of signal
        new_xrange = 1  # 1000ms of signal

    if new_yrange > max_freq:
        new_yrange = max_freq

    if new_yrange < min_freq:
        new_yrange = min_freq

    xcenter = current_xlim[1]
    ycenter = np.mean(current_ylim)

    new_xlim = (xcenter - new_xrange, min(xcenter, 1))
    new_ylim = (current_ylim[0], ycenter + new_yrange / 2)

    ax.set_xlim(new_xlim)
    ax_histx.set_xlim(new_xlim)

    ax.set_ylim(new_ylim)

    # Update the ylim for ax_histy subplot and rescale the amplitude data
    freq_mask = (freq >= new_ylim[0]) & (freq <= new_ylim[1])
    visible_freq = freq[freq_mask]
    visible_amp = amp[freq_mask]
    visible_amp = visible_amp / np.max(amp) * new_yrange / 2

    ax_histy.clear()
    ax_histy.plot(visible_amp, visible_freq)
    ax_histy.set_ylim(new_ylim)
    ax_histy.set_ylabel('Frequency (Hz)')

    # Update time axis labels
    ax_histx.xaxis.set_major_locator(FixedLocator(ax_histx.get_xticks()))
    ax_histx.xaxis.set_major_formatter(FixedFormatter([f"{x * 1000:.0f}" for x in ax_histx.get_xticks()]))

    ax_histx.xaxis.set_major_locator(plt.MaxNLocator(integer=True, prune='both'))
    ax_histx.xaxis.set_major_formatter(FixedFormatter([f"{x * 1000:.0f}" for x in ax_histx.get_xticks()]))
    fig.canvas.draw_idle()

fig.canvas.mpl_connect('key_press_event', on_key)

while True:
    update_spectrogram()
    plt.pause(0.03)