#include "main.hpp"

Led led(2);
Button button(2);
Tone t(2);
Joystick joystick(13,34,35);

void setup() {
  Serial.begin(115200);
  joystick.iniciar();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(joystick.moving()){
    Serial.print(joystick.getX());
    Serial.print(",");
    Serial.print(joystick.getY());
    Serial.print("|");
    Serial.print(joystick.pressionado());
    Serial.println();
  }
}