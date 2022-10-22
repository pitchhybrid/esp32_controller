#include <Arduino.h>
#include "button.hpp"

void Button::iniciar(){
    Component::iniciar(INPUT_PULLUP,false);
    estado = HIGH;
}

bool Button::liberado(){
    return debouce(HIGH);
}

bool Button::pressionado(){
    return debouce(LOW);
}

boolean Button::debouce(int state)
{
    boolean gotEvent = false;

    int reading = digitalRead(pin);

    if (reading != lastState)
    {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > DEBOUNCE_DELAY)
    {
        if (reading != estado)
        {
            estado = reading;

            if (estado == state)
            {
                gotEvent = true;
            }
        }
    }

    lastState = reading;

    return gotEvent;
}