import numpy as np
import matplotlib.pyplot as plt
import time
import os

dt = 0.001  # Set the time step to 1 ms
t = np.arange(0.0, 1.0, dt)  # Set the time range to 0 to 1000 ms

# Function to read data from the file
def read_data(file_path):
    while True:
        try:
            with open(file_path, 'rb') as f:
                data = np.fromfile(f, dtype=np.float64)
            break
        except FileNotFoundError:
            time.sleep(0.1)
            continue
    return data

# Set up the plot
plt.ion()
fig, ax = plt.subplots()

while True:
    # Read the time-domain data from the file
    x1 = read_data('./spec/time_domain')

    # Update the plot with the new data
    ax.clear()
    ax.plot(t, x1)
    ax.set_xlabel('Time (s)')
    ax.set_ylabel('Amplitude')
    ax.set_title('Time-domain Signal')

    plt.draw()
    plt.pause(0.01)