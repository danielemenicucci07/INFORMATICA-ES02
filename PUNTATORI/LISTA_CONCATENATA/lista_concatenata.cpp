#include <iostream>
#include "lista_concatenata.h"

using namespace std;

void lista::push(int x){

    p = new nodo;
    p -> info = x;
    p -> next = testa;
    testa = p; 
}

void lista::pop()
{
    p = testa;
    testa = testa -> next;
    delete p;
}

int lista::top()
{
    return testa -> info;
}


void lista::stampa()
{
     do{
        cout<<p->info<<endl;
        p -> next;
    }while(p->next!=NULL);
}
   
