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

PinEvent listen_for_event(unsigned long wait_time = 0) {
  static bool init = false;
  static PinMode[5] pin_modes;
  static PinEventType[5] event_type;

  return PinEvent{0, PinEventType::PinDown};
}
