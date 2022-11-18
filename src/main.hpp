#include <Arduino.h>

#include "led.hpp"
#include "button.hpp"
#include "tone.hpp"
#include "joystick.hpp"

#define BOUND_RATE 115200

Button btnAz(26);
Button btnVer(25);
Button btnAma(27);

Led led(2);

Joystick joystick(13,34,35);

void atraso(int ms);