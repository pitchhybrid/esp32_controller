#include "joystick.hpp"

void Joystick::iniciar(){
    pinMode(pin,INPUT_PULLUP);
}

int Joystick::getX(){
    return analogRead(x);
}

int Joystick::getY(){
    return analogRead(y);
}

int* Joystick::getPosition(){
    int v[2] = {getX(),getY()};
    return (int*) v;
}

void Joystick::setDeadZone(int deadZone){
    this->deadZone = 0.1 * deadZone;
}

bool Joystick::moving(){
    if(getX() > 2000 || getY() > 2000){
        return true;
    }
    if(getX() < 1600 || getY() < 1600){
        return true;
    }
    return false;
}