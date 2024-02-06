#ifndef QUADRATO_h
#include <iostream>
#include "Rettangolo.h"

class Quadrato{

    protected: 

        int lato;

    public:

    Quadrato(int lato=5){

        this->lato=lato;
    }

    int CalcolaArea();
    int CaloclaPerimetro();
    int CalcolaDiagonale();


    
}