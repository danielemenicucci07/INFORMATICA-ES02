/** ****************************************************************************************
* 
*
* @brief Scrivere un programma che converte un numero binario a 8 bit in un numero decimale. 
*        L’utente inserisce le cifre del numero binario un bit alla volta, partendo dal bit 
*        più significativo. Il programma dovrà visualizzare il numero decimale corrispondente. 
*        Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow includendo la 
*        libreria math.h.
* 
* @author daniele menicucci
* @date 06/12/2022
*/

#include <stdio.h>      // definisco libreria  
#include <math.h>

int main()  
{
 
    int bit, num=0, t=7;  // dichiaro variabili t variabile di lavoro

    printf("inserisci 8 bit\n");    

    do{          		//inizializzo do while
        scanf("%d", &bit);          

        num += pow(2, t) * bit;  

        t--;                       
    } while (t>-1);     //termino ciclo do while            

    printf("\nConversione in binario=%d\n", num);            
}

