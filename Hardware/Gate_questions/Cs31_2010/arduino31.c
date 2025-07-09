// Pin assignments
const int pinP = 2;
const int pinQ = 3;
const int pinR = 4;
const int ledF = 5;

void setup() {
  pinMode(pinP, INPUT);
  pinMode(pinQ, INPUT);
  pinMode(pinR, INPUT);
  pinMode(ledF, OUTPUT);
}

void loop() {
  int P = digitalRead(pinP);
  int Q = digitalRead(pinQ);
  int R = digitalRead(pinR);

  // Example logic: f = NOT((P OR Q) AND R)
  int f = !((P || Q) && R);

  digitalWrite(ledF, f);
  delay(100); // debounce delay
}

