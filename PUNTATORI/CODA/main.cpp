#include <iostream>
#include "coda.h"

using namespace std;

int main() {
    coda c(100);
    c.push(22);
    c.push(23);
    c.push(24);
    c.push(25);
    c.push(26);
    //c.pop();
    c.push(27);

    int x = c.top();// do a x il valore del primo elemento
    cout<<"primo elemento: "<<x<<endl; // stampo il primo elemento

    c.stampa();

}