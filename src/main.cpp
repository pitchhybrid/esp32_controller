#include "main.hpp"

void setup() {
  Serial.begin(BOUND_RATE);
  joystick.iniciar();
  btnVer.iniciar();
  btnAma.iniciar();
  led.iniciar();
}

void loop() {
  
  if(joystick.getX() > RIGHT){
    Serial.write("ui_right\n");
  }

  if(joystick.getX() < LEFT){
    Serial.write("ui_left\n");
  }

  if(joystick.getY() > UP){
    Serial.write("ui_up\n");
  }
  
  if(joystick.getY() < DOWN){
    Serial.write("ui_down\n");
  }

  if(btnAz.pressionado()){
    Serial.write("blue\n");
  }
  
  if(btnAma.pressionado()){
    Serial.write("yellow\n");
  }

  if(btnVer.pressionado()){
    Serial.write("green\n");
  }

  atraso(50);
}

void atraso(int ms){
  const long timeNow = millis();
  while (millis() < timeNow + ms);
};