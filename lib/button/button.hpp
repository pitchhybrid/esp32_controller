#include <Arduino.h>
#include "component.hpp"
#pragma once
class Button:public Component{
    private:
        const long DEBOUNCE_DELAY = 50;

        int lastState = HIGH;
        int lastDebounceTime;

    public:
        Button(int _pin) : Component(_pin){};
        void iniciar();
        bool pressionado();
        bool liberado();
        bool debouce(int state);
};