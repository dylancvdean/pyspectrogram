import numpy as np
import os
import fcntl
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import time

#Disable s key saving screenshot
plt.rcParams['keymap.save'].remove('s')

# Define variables
dt = 0.001
t = np.arange(0.0, 1.0, dt)
buffer_size = 100
colormaps = ['viridis', 'plasma', 'inferno', 'magma', 'cividis']
current_colormap = 0

first_call = True
init_ax_ylim = None
init_ax_xlim = None
init_ax_freq_ylim = None
init_ax_time_xlim = None
current_zoom=1

# Create a function to read the FFT buffer file
def read_fft_buffer_file(file_path):
    if os.path.exists(file_path):
        with open(file_path, 'rb') as f:
            fcntl.flock(f, fcntl.LOCK_EX)
            data = np.fromfile(f, dtype=np.complex128)
            fcntl.flock(f, fcntl.LOCK_UN)
            try:
                return data.reshape(buffer_size, -1)
            except ValueError:
                return np.zeros((buffer_size, len(t) // 2 + 1), dtype=np.complex128)
    else:
        return np.zeros((buffer_size, len(t) // 2 + 1), dtype=np.complex128)


# Create a function to read the Time Domain file
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
        return [im, line, freq_line]

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

    return [im, line, freq_line]

# Set up the spectrogram plot
fig = plt.figure(figsize=(16, 9))
outer_gs = fig.add_gridspec(2, 2, width_ratios=(2, 8), height_ratios=(4, 1),
                            left=0.1, right=0.9, bottom=0.1, top=0.9,
                            wspace=0.05, hspace=0.05)
ax = fig.add_subplot(outer_gs[0, 1])

# Read input file
fft_buffer = read_fft_buffer_file('./spec/fft')
magnitude = np.abs(fft_buffer)
normalized_magnitude = magnitude / np.max(magnitude)

# Add colormap and axis labels
im = ax.imshow(normalized_magnitude.T, cmap='viridis', aspect='auto', origin='lower')
cbar = fig.colorbar(im, ax=ax)
cbar.ax.set_ylabel('Magnitude (dB)')
ax.set_title('Real-time Spectrogram')
ax.set_xlabel('Time (Window Index)')

# Set up tickmarks, don't double label axes
num_yticks = 11
ytick_locs = np.linspace(0, len(t) // 2 + 1, num_yticks)
#ytick_locs=np.linspace(0,20000,num_yticks)
#ytick_labels = np.linspace(0, 1 / (2 * dt), num_yticks)
ytick_labels = np.linspace(0,40000,num_yticks)

ax.set_yticks(ytick_locs)
ax.set_yticklabels(ytick_labels)
ax.set_ylabel('')
ax.set_xticklabels([])
ax.set_yticklabels([])
ax.set_xticks([])
ax.set_yticks([])

# Set up the time domain plot
inner_gs = outer_gs[1, 1].subgridspec(1, 2, width_ratios=[9, 2], wspace=0.05)
ax_time_domain = fig.add_subplot(inner_gs[0, 0])
line, = ax_time_domain.plot(t, np.zeros(len(t)), lw=1)
ax_time_domain.set_ylim(-100, 100)
ax_time_domain.set_xlim(0,1)
ax_time_domain.set_title('')
ax_time_domain.set_xlabel('Time (S)')
ax_time_domain.set_ylabel('Amplitude')

# Set up the frequency domain plot
ax_freq_domain = fig.add_subplot(outer_gs[0, 0])
freq_line, = ax_freq_domain.plot(np.zeros(len(t) // 2 + 1), np.arange(len(t) // 2 + 1), lw=1)
ax_freq_domain.set_xlim(0, 200)
ax_freq_domain.set_ylim(0, len(t) // 2 + 1)
ax_freq_domain.set_title('Frequency Domain')
ax_freq_domain.set_xlabel('Amplitude (dB)')
ax_freq_domain.set_ylabel('Frequency (FFT Index)')

ax_freq_domain.set_yticklabels(ytick_labels)

ax.set_xlim(0, 100)  # Set the x-axis limits to 0 to 1000 ms
ax.set_xlabel('')  # Remove x-axis label from the spectrogram plot

def on_key(event):
    # Handle keypress events
    global current_colormap, im, cbar, ax, fig, ax_time_domain, ax_freq_domain
    global init_ax_ylim, init_ax_xlim, init_ax_freq_ylim, init_ax_time_xlim, first_call, current_zoom

    if first_call:
        # Set our variables to limit the zoom
        init_ax_ylim = ax.get_ylim()
        init_ax_xlim = ax.get_xlim()
        init_ax_freq_ylim = ax_freq_domain.get_ylim()  # Remove *20 from here
        init_ax_time_xlim = ax_time_domain.get_xlim()
        first_call = False

    zoom_factor = 1.1  # How much to zoom by at once

    if event.key == 'right':
        # Shift colormap forward
        current_colormap = (current_colormap + 1) % len(colormaps)

    elif event.key == 'left':
        # Shift colormap back
        current_colormap = (current_colormap - 1) % len(colormaps)

    elif event.key == 'w':
        # Zoom in on the frequency axis
        y_min, y_max = ax.get_ylim()
        new_y_min, new_y_max = y_min * zoom_factor, y_max / zoom_factor
        ax.set_ylim(new_y_min, new_y_max)
        y_min, y_max = ax_freq_domain.get_ylim()
        new_y_min, new_y_max = y_min * zoom_factor, y_max / zoom_factor
        ax_freq_domain.set_ylim(new_y_min, new_y_max)

        # Update the y-axis tick labels
        ytick_locs = ax_freq_domain.get_yticks()
        ytick_labels = np.linspace(0, min(20000*current_zoom,20000), len(ytick_locs))
        ax_freq_domain.set_yticklabels(ytick_labels)
        current_zoom /= zoom_factor  # Update the zoom factor

    elif event.key == 's':
        # Zoom out on the frequency axis
        y_min, y_max = ax.get_ylim()
        new_y_min, new_y_max = max(y_min / zoom_factor, init_ax_ylim[0]), min(y_max * zoom_factor, init_ax_ylim[1])
        ax.set_ylim(new_y_min, new_y_max)
        y_min, y_max = ax_freq_domain.get_ylim()
        new_y_min, new_y_max = max(y_min / zoom_factor, init_ax_freq_ylim[0]), min(y_max * zoom_factor, init_ax_freq_ylim[1])
        ax_freq_domain.set_ylim(new_y_min, new_y_max)

        # Update the y-axis tick labels
        ytick_locs = ax_freq_domain.get_yticks()
        ytick_labels = np.linspace(0, min(20000*current_zoom,20000), len(ytick_locs))
        ax_freq_domain.set_yticklabels(ytick_labels)
        current_zoom *= zoom_factor  # Update the zoom factor


    elif event.key == 'a':
        # Zoom out on the time axis
        x_min, x_max = ax.get_xlim()
        new_x_min, new_x_max = max(x_min / zoom_factor, init_ax_xlim[0]), min(x_max * zoom_factor, init_ax_xlim[1])
        ax.set_xlim(new_x_min, new_x_max)
        ax_time_domain.set_xlim(new_x_min / 100, new_x_max / 100)

    elif event.key == 'd':
        # Zoom in on the time axis
        x_min, x_max = ax.get_xlim()
        new_x_min, new_x_max = x_min * zoom_factor, x_max / zoom_factor
        ax.set_xlim(new_x_min, new_x_max)
        ax_time_domain.set_xlim(new_x_min / 100, new_x_max / 100)

    # Reassign colormap
    im.set_cmap(colormaps[current_colormap])

    # Remove the old colorbar and create a new one
    cbar.remove()
    cbar = fig.colorbar(im, ax=ax)
    cbar.ax.set_ylabel('Magnitude (dB)')
    fig.canvas.draw_idle()

# Apply inputs to our figure
fig.canvas.mpl_connect('key_press_event', on_key)

# Create an animation to update the spectrogram in real-time
ani = FuncAnimation(fig, update_spectrogram, interval=30, cache_frame_data=False, blit=True)

# Display the spectrogram
plt.show()