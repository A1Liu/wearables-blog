#pragma once

enum class Pin { One, Two, Three, Four, Five };

enum class PinMode { Input, Output };

enum class PinEventType { PinDown, PinUp };

class PinEvent {
  int pin_number;
  PinEventType event_type;

public:
  PinEvent(int _number, PinEventType _event_type)
      : pin_number(_number), event_type(_event_type) {}
};

void pinMode(int pin, PinMode p) {
  if (p == PinMode::Input) {
    pinMode(pin, INPUT);
  } else {
    pinMode(pin, OUTPUT);
  }
}

PinEvent listen_for_event() {
  static bool init = false;

  return PinEvent{0, PinEventType::PinDown};
}
