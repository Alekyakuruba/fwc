from machine import Pin
import time

# Input pins
P = Pin(14, Pin.IN, Pin.PULL_DOWN)
Q = Pin(15, Pin.IN, Pin.PULL_DOWN)
R = Pin(16, Pin.IN, Pin.PULL_DOWN)

# Output pin
F = Pin(13, Pin.OUT)

while True:
    p = P.value()
    q = Q.value()
    r = R.value()

    # Example logic: f = NOT((P OR Q) AND R)
    f = not ((p or q) and r)

    F.value(f)
    time.sleep(0.1)

