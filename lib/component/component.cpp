#include <Arduino.h>
#include "component.hpp"

void Component::iniciar(int mode, bool analogic){
    if(!analogic){
        pinMode(pin,mode);
    }
}