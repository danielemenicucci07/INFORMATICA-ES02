#include<iostream>
#include "Contatore.h"
#include"contatoredoppio.h"
#include "contatoreterzo.h"
int main(){
       cout<<"Contatore: "<<endl;

    Contatore c1;

    c1.inc();
    c1.inc();
    c1.dec();
    c1.stampa();
    cout<<"contatoredoppio: "<<endl;
    contatoredoppio c2;
    c2.inc();
    c2.inc();
    c2.dec();
    c2.stampa();
    contatoreterzo c3;
    c3.inc();
    c3.inc();
    c3.dec();
    c3.stampa();


}