void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT); // Alarm
  pinMode(1, OUTPUT); // Status
  pinMode(2, INPUT); // StartStop
  pinMode(3, INPUT); // Hours
  pinMode(4, INPUT); // Minutes

  // From the H2OhNo tutorial
  ADCSRA &= ~(1<<ADEN); //Disable Analog-to-Digital Converter, saves ~230uA
}

enum class InputPin {
  Hours,
  Minutes,
  StartStop
};

enum class OutputPin {
  Sound,
  Status
};

boolean read_pin(InputPin &pin) {
  if (analogRead(2) > 128) {
    pin = StartStop;
    return true;
  } else if (analogRead(3) > 128) {
    pin = Hours;
    return true;
  } else if (analogRead(4) > 128) {
    pin = Minutes;
    return true;
  } else return false;
}

short hours_ = 0;
short minutes_ = 0;

void loop() {
  InputPin pin;
  if (read_pin(pin)) { // Logic for configuring alarm
  } else {
  }
}
