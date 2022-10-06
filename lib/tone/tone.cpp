#include "tone.hpp"
#include <Arduino.h>

struct Melody {
    int freq;
    int duration;
};


void Tone::iniciar(){}

void Tone::_tone(int frequency,long duration){
    tone(pin, frequency,duration);
}

void Tone::_tone(int frequency){
    tone(pin,frequency);
}

void Tone::_noTone(){
    noTone(pin);
}

void Tone::_tone(Melody melody){
    _tone(melody.freq,melody.duration);
}

template<typename... Args>
void Tone::melody(Melody melody ...){
    int dummy[] = { 0, ( (void) _tone(std::forward<Args>(melody)), 0) ... };
}