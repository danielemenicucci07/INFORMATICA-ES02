#include<iostream>
#include<math.h>
using namespace std;
#include "Contatore.h"
#include "contatoredoppio.h"
#include "contatoreterzo.h"

contatoreterzo::contatoreterzo(){

    contatoredoppio::contatoredoppio();
}

void contatoreterzo::inc(){

    contatoredoppio::inc();
    contatoredoppio::inc();
}