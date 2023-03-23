import numpy as np
import matplotlib.pyplot as plt
import time

# Fixing random state for reproducibility
#np.random.seed(19680801)

dt = 0.0005
t = np.arange(0.0, 20.0, dt)
s1 = np.sin(2 * np.pi * 100 * t)
s2 = 2 * np.sin(2 * np.pi * 400 * t)
s3 = np.sin(2 * np.pi * 400 * t)
# create a transient "chirp"
s2[t <= 10] = s2[12 <= t] = 0

# add some noise into the mix
nse = 0.01 * np.random.random(size=len(t))

x1 = s1 + s2 + s3 + nse  # the signal
NFFT = 1024  # the length of the windowing segments
Fs = int(1.0 / dt)  # the sampling frequency

# ax1.plot(t, x1)
# Pxx, freqs, bins, im = ax2.specgram(x1, NFFT=NFFT, Fs=Fs, noverlap=900)
# The `specgram` method returns 4 objects. They are:
# - Pxx: the periodogram
# - freqs: the frequency vector
# - bins: the centers of the time bins
# - im: the .image.AxesImage instance representing the data in the plot

# some random data
x = np.random.randn(1000)
y = np.random.randn(1000)

def draw(x, y, ax, ax_histx, ax_histy, ax_colormap):
    # no labels
    ax_histx.tick_params(axis="x", labelbottom=False)
    ax_histy.tick_params(axis="y", labelleft=False)

    Pxx, freqs, bins, im = ax.specgram(x1, NFFT=NFFT, Fs=Fs, noverlap=900)

    # calculate the frequency and amplitude of the signal
    fft = np.fft.fft(x1)
    freq = np.fft.fftfreq(len(x1), dt)
    freq_mask = freq >= 0
    freq = freq[freq_mask]
    amp = np.abs(fft[freq_mask])
    
    # plot the frequency and amplitude on the left plot
    ax_histy.plot(amp, freq)
    ax_histy.set_ylim([0, Fs/2])
    
    # plot the x-axis data on the bottom plot
    ax_histx.plot(t, x1)

#16:9 aspect ratio figure
fig = plt.figure(figsize=(16, 9))
#Define the gridspec to have the shape we need
gs = fig.add_gridspec(2, 3,  width_ratios=(2, 8, 1), height_ratios=(4, 1),
                      left=0.1, right=0.9, bottom=0.1, top=0.9,
                      wspace=0.05, hspace=0.05)

# Create the Axes.
ax = fig.add_subplot(gs[0, 1]) #main window
ax_histx = fig.add_subplot(gs[1, 1], sharex=ax) #bottom
ax_histy = fig.add_subplot(gs[0, 0], sharey=ax) #left
ax_colormap = fig.add_subplot(gs[0, 2]) #right
# Draw the plots


    
draw(x, y, ax, ax_histx, ax_histy, ax_colormap)


plt.show()

