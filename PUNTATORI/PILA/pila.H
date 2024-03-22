#ifndef PILA_H
#define PILA_H

class Pila 
{
    private:
        int * vet;// puntatore
        int size;// dimensioni dell'array
        int fine;// indice della pila
    
    public:
        Pila(int size = 10)
        {
            vet = new int[size];//punta all'array che sto creando dinamicamente con new
            fine = 0;// inizializzo l'indice a 0 
        }

        bool isEmpty();// controllo se è vuoto
        bool isFull();// controllo se è pieno
        bool push(int);//aggiunge un elemento
        bool pop();// tolgo il primo elemento
        int top();// stampa l'ultimo inserito
        void stampa();// stampo il vettore
};
#endif
