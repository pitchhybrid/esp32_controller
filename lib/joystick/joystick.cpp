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

std::array<int,2> Joystick::getPosition(){
    std::array<int,2> v;
    v[0] = getX();
    v[1] = getY();
    return v;
}

void Joystick::setDeadZone(int deadZone){
    this->deadZone = 0.1 * deadZone;
}

bool Joystick::moving(){
    if(getX() > UP || getY() > LEFT){
        return true;
    }
    if(getX() < RIGHT || getY() < DOWN){
        return true;
    }
    return false;
}

bool Joystick::movingX(){
    if(getX() > RIGHT || getX() < LEFT){
        return true;
    }
    return false;
}

bool Joystick::movingY(){
    if(getY() > UP || getY() < DOWN){
        return true;
    }
    return false;
}