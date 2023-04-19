import numpy as np
import os
import time
import fcntl
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# Define variables
dt = 0.001
t = np.arange(0.0, 1.0, dt)
buffer_size = 100

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

# Create a function to update the spectrogram
def update_spectrogram(i):
    global im
    fft_buffer = read_fft_buffer_file('./spec/fft')
    magnitude = np.abs(fft_buffer)
    magnitude[np.isnan(magnitude) | np.isinf(magnitude)] = 0
    if magnitude.size > 0 and np.max(magnitude) > 0:
        normalized_magnitude = magnitude / (np.max(magnitude) + 1e-8)
    else:
        normalized_magnitude = np.zeros((buffer_size, len(t) // 2 + 1), dtype=np.float64)

    # Ensure the correct dimensions of the normalized_magnitude array
    num_rows, num_cols = buffer_size, len(t) // 2 + 1
    normalized_magnitude = 20*normalized_magnitude[:num_rows, :num_cols]

    im.set_array(normalized_magnitude.T)
    return [im]

# Set up the spectrogram plot
fig, ax = plt.subplots()
fft_buffer = read_fft_buffer_file('./spec/fft')
magnitude = np.abs(fft_buffer)
normalized_magnitude = magnitude / np.max(magnitude)
im = ax.imshow(normalized_magnitude.T, cmap='viridis', aspect='auto', origin='lower')
fig.colorbar(im, ax=ax)
ax.set_title('Real-time Spectrogram')
ax.set_xlabel('Time (Window Index)')
ax.set_ylabel('Frequency (FFT Index)')

# Create an animation to update the spectrogram in real-time
ani = FuncAnimation(fig, update_spectrogram, interval=30, cache_frame_data=False, blit=True)

# Display the spectrogram
plt.show()