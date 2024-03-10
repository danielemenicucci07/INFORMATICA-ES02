#ifndef CONTATORETERZO_H
#include <iostream>
#include "Contatoredoppio.h"

class contatoreterzo: public contatoredoppio(){};
{
    contatoreterzo(int valore = 0, int passo = 1):contatoredoppio(valore,passo){};
    void inc();
}

#endif