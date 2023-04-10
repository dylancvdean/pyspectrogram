import numpy as np
import matplotlib
matplotlib.use("TkAgg")
import matplotlib.pyplot as plt
from matplotlib.ticker import FixedLocator, FixedFormatter
import time

dt = 0.001  # Set the time step to 1 ms
t = np.arange(0.0, 1.0, dt) * 1000  # Set the time range to 0 to 1000 ms

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

ax.set_xlim(0, 1000)  # Set the x-axis limits to 0 to 1000 ms
ax_histx.set_xlim(0, 1000)  # Set the x-axis limits to 0 to 1000 ms
ax.set_xlabel('')  # Remove x-axis label from the spectrogram plot
ax_histx.set_xlabel('Time (ms)')  # Add x-axis label to the time domain plot

zoom_scale = 1.1

freq = None

amp = None
freq_mask = None

def update_spectrogram():
    global freq, im
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

    # Update the time array to match the length of the FFT data
    t = np.arange(0.0, len(fft_data) * dt, dt) * 1000

    freq = np.fft.fftfreq(len(fft_data), dt)
    freq_mask = freq >= 0
    freq = freq[freq_mask]
    amp = np.abs(fft_data[freq_mask])

    # Calculate the time bins for the spectrogram
    time_bins = np.arange(0, len(fft_data) * dt, NFFT * dt)[:len(amp)]

    # Clear the spectrogram plot and update it with the new data
    ax.clear()
    im = ax.pcolormesh(time_bins, freq, np.tile(amp, (len(time_bins), 1)).T, cmap=colormaps[current_colormap_idx])
    plt.pause(0.01)

    # Update the frequency domain plot on the left
    ax_histy.clear()
    ax_histy.plot(amp, freq)
    ax_histy.set_ylabel('Frequency (Hz)')
    ax_histy.set_xlabel('Amplitude')

    # Update the time domain plot on the bottom
    ax_histx.clear()
    ax_histx.plot(t[:len(fft_data)], np.real(np.fft.ifft(fft_data)))
    ax_histx.set_ylabel('Amplitude')

def on_key(event):
    global current_colormap_idx

    if event.key == 'right':  # Cycle to the next colormap
        current_colormap_idx = (current_colormap_idx + 1) % len(colormaps)
        update_colormap(ax, colormaps[current_colormap_idx])
        return
    elif event.key == 'left':  # Cycle to the previous colormap
        current_colormap_idx = (current_colormap_idx - 1) % len(colormaps)
        update_colormap(ax, colormaps[current_colormap_idx])
        return
    else:
        return

fig.canvas.mpl_connect('key_press_event', on_key)

while True:
    update_spectrogram()
    plt.pause(0.03)