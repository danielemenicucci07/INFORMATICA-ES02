#include <iostream>
#include "pila.H"
using namespace std;

int main() 
{
    Pila p(100);

    p.push(10);
    p.push(9);
    p.push(2);
    p.pop();
    p.push(45);
    p.push(55);

    p.stampa();
}