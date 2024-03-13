#ifndef LISTA_CONCATENATA_H
#define LISTA_CONCATENATA_H

#include<iostrem>
using namespace std;

struct nodo{

    int info;
    struct nodo * next;

}typedef nodo;

class lista{

    private: 
        nodo * testa;
        nodo * p;


    public: 

        lista(){

            testa = NULL;
        }

        void push(int);
        void pop();
        int top();
        void stampa();


}