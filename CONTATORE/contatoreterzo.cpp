#include<iostream>
#include<math.h>
using namespace std;
#include "Contatore.h"
#include "contatoredoppio.h"
#include "contatoreterzo.h"

void contatoreterzo::inc(){

    contatoredoppio::inc();
    contatoredoppio::inc();
}

void ContatoreDoppio::dec() {
    Contatore::dec();
    Contatore::dec();
}