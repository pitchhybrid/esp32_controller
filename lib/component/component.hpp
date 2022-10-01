#ifndef COMPONENT_H
#define COMPONENT_H
class Component {

    protected:
        int pin;
        bool estado;

    public:
        Component(int _pin) : pin(_pin){};
        virtual void iniciar();
        void iniciar(int mode,bool analogic);
};
#endif