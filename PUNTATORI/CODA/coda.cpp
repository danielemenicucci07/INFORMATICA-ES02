#include <iostream>
#include "coda.h"

using namespace std;

bool coda::isEmpty() { // controllo se è vuoto
    if(nElementi != 0) return false; // se il numero di elementi è diverso da 0 vuol dire che è pieno
    return true;
}

bool coda::isFull() { // controllo se è pieno
    if (nElementi == size)  return true; // se il numero di elementi è uguale alla lunghezza del vettore vuol dire che è pieno
    return false;
}

bool coda::push(int x) { //aggiunge un elemento
    if(!isFull()){ //se è pieno
        vet[fine] = x; // aggiungo un elemento x
        fine = (fine+1)%size; // la coda arrivata alla fine il puntatore torna indietro
        nElementi++;// vado avanti di un elemento
        return true;
    }
    return false;
}

bool coda::pop() { // tolgo il primo elemento
    if(!isEmpty()){// se è vuoto
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