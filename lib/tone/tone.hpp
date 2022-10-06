#include "component.hpp"

struct Melody;

class Tone: public Component {

    public:
    Tone(int _pin): Component(_pin){}
    void iniciar();
    void _tone(Melody melody);
    void _tone(int frequency, long duration);
    void _tone(int frequency);
    void _noTone();
    template<typename... Args>
    void melody(Melody melody ... );
};

