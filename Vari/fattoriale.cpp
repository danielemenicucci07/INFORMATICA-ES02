/** ****************************************************************************************
* 
*
* @brief Si scriva un programma che calcoli il fattoriale di un numero intero N dato dalla 
*        tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene calcolato 
*        con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
* 
* @author daniele menicucci
* @date 04/12/2022
*/

#include <stdio.h>  			 // definisco libreria   

int main()  
{
    

    
    int n, t;    				 //dichiaro n come numero e t come variabile di lavoro  

    printf("Inserisci un numero: ");    
    scanf("%d", &n);

    if(n>0) { 					//inizializzo if                         
        for(t=n-1; t>0; t--) {  // iniziallizzo ciclo for 
            n *= t;                    
        }

        printf("\nIl fattoriale del numero inserito e' %d\n\n", n);   
    }
    else {
        printf("\nNon e' possibile calcolare il fattoriale di un numero negativo\n\n");     
    }
}

