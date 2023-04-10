import numpy as np
import time
import os

dt = 0.001  # Set the time step to 1 ms
t = np.arange(0.0, 1.0, dt)  # Set the time range to 0 to 1000 ms

# Create a function to generate the signal at a given time
def generate_signal(t):
    s1 = np.sin(2 * np.pi * 100 * t)
    s2 = 2 * np.sin(2 * np.pi * 400 * t)
    s3 = np.sin(2 * np.pi * 400 * t)

    s2[t <= 10] = s2[12 <= t] = 0

    nse = 5 * np.random.random(size=len(t))

    return s1 + s2 + s3 + nse

os.makedirs('./spec', exist_ok=True)

window_size = 1000  # Set the window size to 1000 ms
step_size = 10  # Set the step size to 10 ms
current_time = 0

while True:
    # Generate the signal for the current time window
    current_t = np.arange(current_time, current_time + 1.0, dt)
    x1 = generate_signal(current_t)

    # Calculate the FFT of the signal and save it to the file
    fft_data = np.fft.fft(x1)
    with open('./spec/fft', 'w') as f:
        fft_data.tofile(f)

    # Wait for 10 ms before updating the signal
    #time.sleep(step_size / 1000)
    time.sleep(0.03)

    # Update the current time
    current_time += step_size / 1000