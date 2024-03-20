#include <iostream>
#include "pila.H"
using namespace std;

bool Pila::isEmpty()// controllo se è vuoto
{
    if(fine == 0) return true;// se l'indice fine è 0 vuol dire che si trova sul primo elemento quindi è vuoto
    return false;
}

bool Pila::isFull()// se l'indice fine è >= di size vuol dire che si trova sull''ultimo elemento quindi è pieno
{
    if(fine >= size) return true;
    return false;
}

bool Pila::push(int x) //aggiunge un elemento
{
    if(!isFull()) { //se è pieno
        vet[fine] = x;// aggiungo un elemento x
        fine++;// passo al prossimo elemento
        return true; 
    }
    return false;
}

bool Pila::pop() // tolgo il primo elemento
{
    if(!isEmpty()) { //se è vuoto
        fine--;// tolgo un elemento
        return true;
    }
    return false;
}

int Pila::top() // stampa l'ultimo inserito
{
    if(!isEmpty())//se è vuoto
    {
        return vet[fine-1];// returna l'ultimo inserito
    }
    return -1;
}

void Pila::stampa() // stampo il vettore
{
    for(int i = 0; i<fine; i++) cout<<vet[i]<<endl;
}