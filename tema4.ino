#include <Mouse.h>

void setup() {
  Mouse.begin();
  randomSeed(analogRead(A5));
}

void loop() {
  Mouse.move(random(-5,6), random(-5, 6), 0);
  delay(10);
}
