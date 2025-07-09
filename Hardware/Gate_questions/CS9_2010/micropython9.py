from machine import Pin
from time import sleep

# Define input pins
P = Pin(14, Pin.IN, Pin.PULL_DOWN)
Q = Pin(15, Pin.IN, Pin.PULL_DOWN)
R = Pin(16, Pin.IN, Pin.PULL_DOWN)

# Define output pin
f = Pin(13, Pin.OUT)

while True:
    q = Q.value()
    r = R.value()
    
    # Example logic: f = NOT(Q OR R)
    output = not (q or r)
    
    f.value(output)
    sleep(0.1)

