#include<iostream>
#include<math.h>
using namespace std;
#include "Contatore.h"

    Contatore::Contatore(){

        this->valore=0;
        this->passo=1;
    }
    Contatore::Contatore(int valore){

        this->valore=valore;

    }
    Contatore::Contatore(int valore,int passo){

        this->passo=passo;
    }

    //~Contatore();  /*distruttore*/

    void Contatore::setValore(int valore){

        this->valore=valore;
    }

    int Contatore::getValore(){

        return valore;

    }

    void Contatore::setPasso(int passo){

        this->passo=passo;

    }
    int Contatore::getPasso(){

        return passo;

    }

    void Contatore::reset(){

        this->valore=0;
    }

    void Contatore::inc(){

        for(int i=0;i < passo;i++){

            this->valore+=valore;
        }

    }

    void Contatore::dec(){

        for(int i=0;i < passo;i--){

            this->valore=valore-1;
        }
    }

    void Contatore::stampa(){

        cout<<"il valore e': "<<valore<<endl;
        cout<<"il passo e': "<<passo<<endl;
    }
