#ifndef CODA_H
#define CODA_H

class coda {
    
    private:
        int nElementi;// numero elementi
        int fine;// indice
        int inizio;// indice
        int size;// diensione coda
        int * vet;// puntatori
    
    public:
        coda(int size = 10) { // costruttore
            this -> size = size;
            vet = new int[size];//vet punta a un array di interi di size dimensioni
            inizio = 0;// primo elemento
            fine = 0;// ultimo elemento
            nElementi = 0;// numero elementi coda
        }

        bool isEmpty();// controllo se è vuoto
        bool isFull();// controllo se è pieno
        bool push(int);//aggiunge un elemento
        bool pop();// tolgo il primo elemento
        int top();// stampa l'ultimo inserito
        void stampa();// stampo il vettore
};

#endif