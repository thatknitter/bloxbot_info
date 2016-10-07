#include <Morse.h>

Morse led = 13;
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  led.dash(); led.dot(); led.dot(); led.dot(); //makes the letter "B"
  led.dash(); led.dash(); led.dash(); //makes the letter "O"
  led.dash(); led.dot(); led.dot(); led.dot(); //makes the letter "B"
  delay(3000);
}

