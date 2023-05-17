# Timing
## Profiling
The python profiler used was [functiontrace](https://functiontrace.com/), with the simple command 

'cpulimit -l 24 functiontrace Spectrogram.py'

This command uses cpulimit to restrict the functiontrace operation to 24% of my laptop's CPU speed, which is 3.4Ghz. This roughly accounts for the difference between my laptop's dual core processor, and the DE-10 nano's dual core 800Mhz processor.