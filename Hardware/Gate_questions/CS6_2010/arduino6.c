// Define pins
const int pinP = 2;
const int pinQ = 3;
const int pinR = 4;
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

  // Example logic: f = NOT((P OR Q) AND R)
  int f = !((p || q) && r);

  digitalWrite(pinF, f);
}

