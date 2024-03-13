#include <iostream>
#include "coda.h"

using namespace std;

bool coda::isEmpty() { // controllo se è vuoto
    if(nElementi!=0) return false;
    return true;
}

bool coda::isFull() { // controllo se è pieno
    if (nElementi == size)  return true;
    return false;
}

bool coda::push(int x) { //aggiunge un elemento
    if(!isFull()){
        vet[fine] = x;
        fine = (fine+1)%size; // la coda arrivata alla fine il puntore torna indietro
        nElementi++;
        return true;
    }
    return false;
}

bool coda::pop() { // tolgo il primo elemento
    if(!isEmpty()){
        inizio = (inizio+1)%size;
        nElementi--;
        return true;
    }
    return false;
}

int coda::top() {
    if(!isEmpty()) {
        return vet[fine];
    }
    return 0;
}

void coda::stampa() {
    if(!isEmpty()) {
        for(int i = inizio; i != fine; i = (i+1)%size) {
            cout << vet[i] << " ";
        }
        cout <<endl;
    }
    else cout<<"coda vuota";
}