#include <iostream>
using namespace std;
struct nodo{
    int info;
    struct nodo * next;// puntatore
}typedef nodo;

int main()
{
    nodo *pTesta;// creo puntatore di tipo nodo
    nodo *p;// creo puntatore di tipo nodo
    pTesta = new nodo;// alloca uno spazio nella ram di tipo nodo
    p->info = 1;// dai a info il valore di 1
    pTesta->next=NULL // do a next il valore di NULL

    for(int i=0;i<15;i++)
    {
        p=new nodo;// alloca uno spazio nella ram di tipo nodo
        p->info=i;// dai a info il valore di i
        p->next=pTesta;// do a next il valore di ptesta
        pTesta=p;//avvaloro ptesta con p
    }
    for(int i=0;i<15;i++)
    {
        p=pTesta;
        cout<<p->info<<endl;//stampo info
    }
}