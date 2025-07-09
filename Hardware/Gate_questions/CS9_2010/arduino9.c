// Define input pins
const int pinP = 2;
const int pinQ = 3;
const int pinR = 4;

// Define output pin
const int pinF = 5;

void setup() {
  pinMode(pinP, INPUT);
  pinMode(pinQ, INPUT);
  pinMode(pinR, INPUT);
  pinMode(pinF, OUTPUT);
}

void loop() {
  int p = digitalRead(pinP);
  int q = digitalRead(pinQ);
  int r = digitalRead(pinR);

  // Example logic: f = NOT(Q OR R)
  int f = !(q || r);

  digitalWrite(pinF, f);
}

