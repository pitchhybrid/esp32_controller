#include "joystick.hpp"

void Joystick::iniciar(){
    Component::iniciar(INPUT_PULLUP,false);
    estado = HIGH;
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

bool Joystick::movingX(){
    if(getX() > 2000 || getX() < 1600){
        return true;
    }
    return false;
}

bool Joystick::movingY(){
    if(getY() > 2000 || getY() < 1600){
        return true;
    }
    return false;
}