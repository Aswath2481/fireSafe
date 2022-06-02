#ifndef ELECTRON_HPP
#define ELECTRON_HPP
#include "fireSafe.hpp"
struct Electron: public fireSafe::Tools<Electron>{
    int charge;
    float mass;
    Electron(){
        this->charge=-1;
        this->mass=1.6;
    }
    void set(int c,float m);
};
#endif