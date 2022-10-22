#include "main.hpp"

Button btnVer(27);
Button btnAma(26);
Led led(2);
Joystick joystick(13,34,35);

void setup() {
  Serial.begin(BOUND_RATE);
  joystick.iniciar();
  btnVer.iniciar();
  btnAma.iniciar();
  led.iniciar();
}

void loop() {
  
  atraso(200);

  if(joystick.movingX()){
    if(joystick.getX() > 2000){
      Serial.write("ui_right\n");
    }
    if(joystick.getX() < 1600){
      Serial.write("ui_left\n");
    }
  }

  if(btnVer.pressionado()){
    Serial.write("jump\n");
  }

  if(btnAma.pressionado()){
    Serial.write("tiro\n");
  }

}

void atraso(int ms){
  const long timeNow = millis();
  while (millis() < timeNow + ms);
};