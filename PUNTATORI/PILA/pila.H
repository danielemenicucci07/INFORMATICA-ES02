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

        bool isEmpty();
        bool isFull();
        bool push(int);
        bool pop();
        int top();
        void stampa();
};
#endif
