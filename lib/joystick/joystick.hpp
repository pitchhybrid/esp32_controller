#ifndef JOYSTCK_H
#include "button.hpp"
#pragma once
enum Direction{
    UP,
    DOWN,
    LEFT,
    RIGHT
};
class Joystick: public Button {
    private:
        int x;
        int y;
        double deadZone = 1;
    public:
    Joystick(int _pin, int x, int y): Button(_pin){
        this->x = x;
        this->y = y;
    }
    void iniciar();
    int getX();
    int getY();
    int* getPosition();
    void setDeadZone(int deadZone);
    bool moving();
    bool movingX();
    bool movingY();
};
#endif //JOYSTICK_H