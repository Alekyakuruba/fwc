// Pin assignments
const int X_PIN = 2;     // Button X
const int Y_PIN = 3;     // Button Y
const int Z_PIN = 4;     // Button Z
const int F_LED = 13;    // Output LED

void setup() {
  pinMode(X_PIN, INPUT);
  pinMode(Y_PIN, INPUT);
  pinMode(Z_PIN, INPUT);
  pinMode(F_LED, OUTPUT);
}

void loop() {
  int x = digitalRead(X_PIN);
  int y = digitalRead(Y_PIN);
  int z = digitalRead(Z_PIN);

  // Logic: F = (X AND Y) OR (Y AND Z)
  int f = (x && y) || (y && z);

  digitalWrite(F_LED, f);
}

