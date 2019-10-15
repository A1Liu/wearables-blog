#include <avr/sleep.h>

int statusPin = 0;
int inputPin = 1;
int outputPin = 2;

enum class InputPin {
  Hours,
  Minutes
};

boolean read_pin() {
}

void setup() {
  // put your setup code here, to run once:
  pinMode(statusPin, OUTPUT);
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  digitalWrite(statusPin, HIGH);

  // From the H2OhNo tutorial
  ADCSRA &= ~(1<<ADEN); //Disable Analog-to-Digital Converter, saves ~230uA
}

void loop() {
  short b = analogRead(inputPin);
  analogWrite(outputPin, b);
}

boolean read_button() {
  return true;
}
