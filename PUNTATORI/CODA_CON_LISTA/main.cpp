#include <iostream>
#include "coda_con_lista.h"

using namespace std;

int main() {
    
    coda c1;

    int x = c1.top();
    cout<<x<<endl;

    c1.push(10);
    c1.push(11);
    c1.push(12);
    c1.pop();
    c1.push(13);
    c1.push(14);
    c1.push(15);

    c1.stampa();
}