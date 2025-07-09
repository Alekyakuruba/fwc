from machine import Pin
from time import sleep

# Select lines
S1 = Pin(14, Pin.IN, Pin.PULL_DOWN)  # Button A
S0 = Pin(15, Pin.IN, Pin.PULL_DOWN)  # Button B

# Data inputs
C = Pin(16, Pin.IN, Pin.PULL_DOWN)   # Button C
D = Pin(17, Pin.IN, Pin.PULL_DOWN)   # Button D

# Output LED
F = Pin(13, Pin.OUT)  # LED

while True:
    s1 = S1.value()
    s0 = S0.value()
    c = C.value()
    d = D.value()

    # Selection logic for 4x1 MUX (but with 2 inputs here — likely a 2x1 MUX logic)
    # If S1S0 = 00 → Output = C
    # If S1S0 = 01 → Output = D
    # You can customize logic here as per the original circuit

    if s1 == 0 and s0 == 0:
        F.value(c)
    elif s1 == 0 and s0 == 1:
        F.value(d)
    else:
        F.value(0)  # For undefined select lines, turn off output

    sleep(0.1)
