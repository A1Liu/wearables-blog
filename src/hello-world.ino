int blinkPin = 0;
int rc = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(blinkPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blinkPin, HIGH);
  delay(50);
  digitalWrite(blinkPin, LOW);
  delay(50);
}
