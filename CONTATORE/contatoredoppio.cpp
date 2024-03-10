#include<iostream>
#include<math.h>
using namespace std;
#include "Contatore.h"
#include "contatoredoppio.h"

void contatoredoppio::incrementa(){

    Contatore::inc();
    Contatore::inc();
}

void ContatoreDoppio::dec() {
    Contatore::dec();
    Contatore::dec();
}