#include "Rettangolo.h"
#include <iostream>
int main()
{
    Rettangolo r1;
    Rettangolo r2(10);
    Rettangolo r3(20,10);
    r1.setBase(10);
    r1.setAltezza(5);
    r1.stampaTutto();
}