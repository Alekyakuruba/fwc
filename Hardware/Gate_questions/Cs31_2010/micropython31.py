from machine import Pin
import time

# Define input pins
P = Pin(14, Pin.IN, Pin.PULL_DOWN)
Q = Pin(15, Pin.IN, Pin.PULL_DOWN)
R = Pin(16, Pin.IN, Pin.PULL_DOWN)

# Define output pin
f = Pin(13, Pin.OUT)

while True:
    # Read inputs
    p_val = P.value()
    q_val = Q.value()
    r_val = R.value()

    # Example logic: f = not (Q or R)
    f_output = not (q_val or r_val)

    f.value(f_output)
    time.sleep(0.1)

