#include <iostream>
#include "lista_concatenata.h"

using namespace std;

int main() {
    
    lista_concatenata l1;

    int x = l1.top();
    cout<<x<<endl;

    l1.push(10);
    l1.push(11);
    l1.push(12);
    l1.pop();
    l1.push(13);
    l1.push(14);
    l1.push(15);

    l1.stampa();
}