import numpy as np
import time
import os
import fcntl
from scipy import signal

dt = 0.001  # Set the time step to 1 ms
t = np.arange(0.0, 1.0, dt)  # Set the time range to 0 to 1000 ms

# Create a function to generate the signal at a given time
def generate_signal(t):
    signal_freq = 100
    toggle_period = 0.2  # Period of toggling on and off in seconds
    sine_wave = 20 * np.sin(2.0 * np.pi * signal_freq * t)
    
    # Generate a square wave with values of 1 (on) and 0 (off) based on the toggle_period
    square_wave = 20 * np.array([int((ti % (2 * toggle_period)) < toggle_period) for ti in t])
    #print(square_wave)
    toggled_sine_wave = sine_wave * square_wave
    return toggled_sine_wave

os.makedirs('./spec', exist_ok=True)

window_size = 1000  # Set the window size to 1000 ms
step_size = 10  # Set the step size to 10 ms
current_time = 0
shrink_factor = 40
# Create a buffer to store the most recent 100 FFT results
fft_buffer = np.zeros((100, len(t)), dtype=np.complex128)

while True:
    # Generate the signal for the current time window
    current_t = np.linspace(current_time, current_time + 1.0, 40*int(1.0/dt), endpoint=False)
    current_t2 = np.linspace(current_time+0.22, current_time+0.22 + 1.0, 40*int(1.0/dt), endpoint=False)
    x1 = generate_signal(current_t)
    x1=x1[0:1000]
    #x2=1/40
    x2 = generate_signal(current_t2)
    x2 = np.array(x2[::40])
    
    # Calculate the FFT of the signal
    fft_data = np.fft.fft(x1)

    # Update the buffer with the new FFT result
    fft_buffer[:-1] = fft_buffer[1:]
    fft_buffer[-1] = fft_data

    # Save the buffer to the file
    with open('./spec/fft', 'wb') as f:
        fcntl.flock(f, fcntl.LOCK_EX)
        fft_buffer.tofile(f)
        fcntl.flock(f, fcntl.LOCK_UN)

    # Save the time domain signal to a file
    with open('./spec/time_domain', 'wb') as f:
        x2.tofile(f)

    # Wait for 10 ms before updating the signal
    time.sleep(0.01)

    # Update the current time
    current_time += step_size / 1000
