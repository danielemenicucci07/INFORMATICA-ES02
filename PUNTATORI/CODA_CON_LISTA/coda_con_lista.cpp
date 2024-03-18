#include <iostream>
#include "coda_con_lista.h"

using namespace std;

void coda::push(int x){

    p = testa;
    while(p -> next != NULL) {
        p = p -> next;
    } 

    p -> next = new nodo;
    p = p -> next;
    p -> info = dato;
    p -> next = NULL;

}

void coda::pop()
{
    p = testa;
    testa = testa -> next;
    delete p;
}

int coda::top()
{
    return testa -> info;
}


void coda::stampa()
{
     do{
        cout<<p->info<<endl;
        p -> next;
    }while(p -> next != NULL);
}
 