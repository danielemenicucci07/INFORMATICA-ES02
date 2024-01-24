#include<iostream>
#include<math.h>
using namespace std;
#include "Rettangolo.h"
    Rettangolo::Rettangolo()
    {
        base=1;
        altezza=1;
    }
    Rettangolo::Rettangolo(double base)
    {
        this->base=base;
    }
    Rettangolo::Rettangolo(double base, double altezza)
    {
        this->base=base;
        this->altezza=altezza;
    }
    void Rettangolo::setBase(double base)
    {
        this->base=base;
    }
    void Rettangolo::setAltezza(double altezza)
    {
        this->altezza=altezza;
    }
    
    double Rettangolo::getBase()
    {
         return base;
    }
    double Rettangolo::getAltezza()
    {
        return altezza;
    }
    double Rettangolo::calcolaPerimetro()
    {
        double p;
        p=(altezza * 2)+(base * 2);
        return p;
    }
    double Rettangolo::calcolaArea()
    {
        double z;
        z=base*altezza;
        return z;
    }
    double Rettangolo::calcolaDiagonale()
    {
        return sqrt(base*base+altezza*altezza);
    }
    void Rettangolo::stampaTutto()
    {
        cout<<"la base e': "<<base<<endl;
        cout<<"l'altezza e': "<<altezza<<endl;
        cout<<"il perimetro e': "<<calcolaPerimetro()<<endl;
        cout<<"l'area e': "<<calcolaArea()<<endl;
        cout<<"diagonale e': "<<calcolaDiagonale()<<endl;
    }