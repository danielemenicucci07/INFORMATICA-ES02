#ifndef CODA_H
#define CODA_H

class coda {
    
    private:
        int nElementi;// numero elementi
        int fine;// ultimo elemento
        int inizio;// primo elemento
        int size;// diensione coda
        int * vet;
    
    public:
        coda(int size = 10) { // costruttore
            this -> size = size;
            vet = new int[size];
            inizio = 0;// primo elemento
            fine = 0;// ultimo elemento
            nElementi = 0;// numero elementi coda
        }

        bool isEmpty();
        bool isFull();
        bool push(int);
        bool pop();
        int top();
        void stampa();
};

#endif