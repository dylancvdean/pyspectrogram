import numpy as np
import os
import fcntl
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import time

# Define variables
dt = 0.001
t = np.arange(0.0, 1.0, dt)
buffer_size = 100
colormaps = ['viridis', 'plasma', 'inferno', 'magma', 'cividis']
current_colormap = 0
debug = True

starttime=time.time()*1000
# Create a function to read the FFT buffer file
def read_fft_buffer_file(file_path):
    if os.path.exists(file_path):
        with open(file_path, 'rb') as f:
            fcntl.flock(f, fcntl.LOCK_SH)
            data = np.fromfile(f, dtype=np.complex128)
            fcntl.flock(f, fcntl.LOCK_UN)
            try:
                return data.reshape(buffer_size, -1)
            except ValueError:
                return np.zeros((buffer_size, len(t) // 2 + 1), dtype=np.complex128)
    else:
        return np.zeros((buffer_size, len(t) // 2 + 1), dtype=np.complex128)

def read_time_domain_file(file_path):
    if os.path.exists(file_path):
        with open(file_path, 'rb') as f:
            fcntl.flock(f, fcntl.LOCK_SH)
            data = np.fromfile(f, dtype=np.float64)
            fcntl.flock(f, fcntl.LOCK_UN)
            return data
    else:
        return np.zeros(len(t), dtype=np.float64)
    
# Create a function to update the spectrogram
def update_spectrogram(i):
    global im, line, freq_line, cbar
    fft_buffer = read_fft_buffer_file('./spec/fft')
    magnitude = np.abs(fft_buffer)
    magnitude[np.isnan(magnitude) | np.isinf(magnitude)] = 0
    if magnitude.size > 0 and np.max(magnitude) > 0:
        normalized_magnitude = magnitude / (np.max(magnitude) + 1e-8)
    else:
        normalized_magnitude = np.zeros((buffer_size, len(t) // 2 + 1), dtype=np.float64)

    num_rows, num_cols = buffer_size, len(t) // 2 + 1
    normalized_magnitude = 20*normalized_magnitude[:num_rows, :num_cols]

    im.set_array(normalized_magnitude.T)
    time_domain_data = read_time_domain_file('./spec/time_domain')
    
    # Check if the time_domain_data array has the correct shape
    if time_domain_data.shape != (len(t),):
        time_domain_data = np.zeros(len(t), dtype=np.float64)
    
    line.set_ydata(time_domain_data)

    # Update frequency domain plot
    freq_domain_data = np.sum(normalized_magnitude, axis=0)

    freq_line.set_xdata(freq_domain_data)
    if debug:
        print(time.time()*1000-starttime)
    return [im, line, freq_line]

# Set up the spectrogram plot
fig = plt.figure(figsize=(16, 9))
outer_gs = fig.add_gridspec(2, 2, width_ratios=(2, 8), height_ratios=(4, 1),
                            left=0.1, right=0.9, bottom=0.1, top=0.9,
                            wspace=0.05, hspace=0.05)
ax = fig.add_subplot(outer_gs[0, 1])
fft_buffer = read_fft_buffer_file('./spec/fft')
magnitude = np.abs(fft_buffer)
normalized_magnitude = magnitude / np.max(magnitude)
im = ax.imshow(normalized_magnitude.T, cmap='viridis', aspect='auto', origin='lower')
cbar = fig.colorbar(im, ax=ax)
cbar.ax.set_ylabel('Magnitude (dB)')

ax.set_title('Real-time Spectrogram')
ax.set_xlabel('Time (Window Index)')

num_yticks = 11
ytick_locs = np.linspace(0, len(t) // 2, num_yticks)
ytick_labels = np.linspace(0, 1 / (2 * dt), num_yticks)
ax.set_yticks(ytick_locs)
ax.set_yticklabels(ytick_labels)
ax.set_ylabel('')
ax.set_xticklabels([])
ax.set_yticklabels([])
ax.set_xticks([])
ax.set_yticks([])

inner_gs = outer_gs[1, 1].subgridspec(1, 2, width_ratios=[9, 2], wspace=0.05)
ax_time_domain = fig.add_subplot(inner_gs[0, 0])
line, = ax_time_domain.plot(t, np.zeros(len(t)), lw=1)
ax_time_domain.set_ylim(-100, 100)
ax_time_domain.set_xlim(0,1)
ax_time_domain.set_title('')
ax_time_domain.set_xlabel('Time (S)')
ax_time_domain.set_ylabel('Amplitude')

# Set up the frequency domain plot
ax_freq_domain = fig.add_subplot(outer_gs[0, 0], sharey=ax)
freq_line, = ax_freq_domain.plot(np.zeros(len(t) // 2 + 1), np.arange(len(t) // 2 + 1), lw=1)
ax_freq_domain.set_xlim(0, 100)
ax_freq_domain.set_ylim(0, len(t) // 2 + 1)
ax_freq_domain.set_title('Frequency Domain')
ax_freq_domain.set_xlabel('Amplitude')
ax_freq_domain.set_ylabel('Frequency (FFT Index)')

ax.set_xlim(0, 100)  # Set the x-axis limits to 0 to 1000 ms
ax.set_xlabel('')  # Remove x-axis label from the spectrogram plot

def on_key(event):
    global current_colormap, im, cbar, ax, fig
    if event.key == 'right':
        current_colormap = (current_colormap + 1) % len(colormaps)
    elif event.key == 'left':
        current_colormap = (current_colormap - 1) % len(colormaps)
    im.set_cmap(colormaps[current_colormap])

    # Remove the old colorbar and create a new one
    cbar.remove()
    cbar = fig.colorbar(im, ax=ax)
    cbar.ax.set_ylabel('Magnitude (dB)')
    fig.canvas.draw_idle()

fig.canvas.mpl_connect('key_press_event', on_key)

# Create an animation to update the spectrogram in real-time
ani = FuncAnimation(fig, update_spectrogram, interval=10, cache_frame_data=False, blit=True)
ani = FuncAnimation(fig, update_spectrogram, cache_frame_data=False, blit=False)
# Display the spectrogram
plt.show()