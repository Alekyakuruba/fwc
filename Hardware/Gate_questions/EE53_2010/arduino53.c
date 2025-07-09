// Define input pins
const int xPin = 2;
const int yPin = 3;
const int zPin = 4;

// Define output pin
const int ledPin = 13;

void setup() {
  pinMode(xPin, INPUT_PULLUP);  // Enable internal pull-up
  pinMode(yPin, INPUT_PULLUP);
  pinMode(zPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read button inputs (active LOW)
  bool X = !digitalRead(xPin);
  bool Y = !digitalRead(yPin);
  bool Z = !digitalRead(zPin);

  // Apply logic: F = (X AND Y) OR (Y AND Z)
  bool F = (X && Y) || (Y && Z);

  // Set output LED

