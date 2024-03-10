#include<iostream>
#include<math.h>
using namespace std;
#include "Contatore.h"
#include "contatoredoppio.h"

contatoredoppio::contatoredoppio(){

    Contatore::Contatore();
}

void contatoredoppio::incrementa(){

    Contatore::inc();
    Contatore::inc();
}

void ContatoreDoppio::dec() {
    Contatore::dec();
    Contatore::dec();
}