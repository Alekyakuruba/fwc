// Pin Definitions
const int S1 = 2;  // Button A - Select line S1
const int S0 = 3;  // Button B - Select line S0
const int C  = 4;  // Button C - Data input C
const int D  = 5;  // Button D - Data input D
const int F  = 6;  // LED Output F

void setup() {
  // Configure input pins
  pinMode(S1, INPUT);
  pinMode(S0, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);

  // Configure output pin
  pinMode(F, OUTPUT);
}

void loop() {
  int s1 = digitalRead(S1);
  int s0 = digitalRead(S0);
  int c = digitalRead(C);
  int d = digitalRead(D);
  int out = 0;

  // Multiplexer logic
  if (s1 == 0 && s0 == 0) {
    out = c;
  } else if (s1 == 0 && s0 == 1) {
    out = d;
  } else {
    out = 0;  // For any other select combination, set output LOW
  }

  digitalWrite(F, out);
}
