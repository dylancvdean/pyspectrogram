# Timing
## Profiling
The python profiler used was [functiontrace](https://functiontrace.com/), with the simple command 

`cpulimit -l 24 functiontrace Spectrogram.py`

This command uses cpulimit to restrict the functiontrace operation to 24% of my laptop's CPU speed, which is 3.4Ghz. This roughly accounts for the difference between my laptop's dual core processor, and the DE-10 nano's dual core 800Mhz processor.

Noteworthy in the profile is that 84% of the clock cycles are spent on show(), which means that only 16% is available for optimization. Further improvements to the code will only yield marginal performance improvements without changing how the plots are displayed.

---
## Time measurements
Using the same cpulimit factor to approximate the performance of the DE-10 Nano, we add a `print(time.time_ns()/1000000)` line in the `update_spectrogram()` function.

This gives us an average framerate of just over 10 FPS. This misses our spec by a third, and the degree to which it misses our spec is not solvable with optimizations short of switching from matplotlib.