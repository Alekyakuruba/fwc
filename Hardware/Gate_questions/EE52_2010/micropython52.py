from machine import Pin
from time import sleep

# Define input pins
X = Pin(14, Pin.IN, Pin.PULL_DOWN)
Y = Pin(15, Pin.IN, Pin.PULL_DOWN)
Z = Pin(16, Pin.IN, Pin.PULL_DOWN)

# Define output pin
F = Pin(13, Pin.OUT)

while True:
    x = X.value()
    y = Y.value()
    z = Z.value()
    
    # Logic: F = (X AND Y) OR (Y AND Z)
    f = (x and y) or (y and z)
    
    F.value(f)
    sleep(0.1)

