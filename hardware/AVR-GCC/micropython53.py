from machine import Pin
import time

# Input Pins
x = Pin(14, Pin.IN, Pin.PULL_UP)
y = Pin(15, Pin.IN, Pin.PULL_UP)
z = Pin(16, Pin.IN, Pin.PULL_UP)

# Output LED Pin
f_led = Pin(13, Pin.OUT)

while True:
    X = not x.value()  # Active low due to pull-up
    Y = not y.value()
    Z = not z.value()

    # Logic: F = (X AND Y) OR (Y AND Z)
    F = (X and Y) or (Y and Z)

    f_led.value(F)
    time.sleep(0.1)

