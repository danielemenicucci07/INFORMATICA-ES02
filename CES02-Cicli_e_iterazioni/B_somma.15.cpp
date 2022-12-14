/** ****************************************************************************************
* 
*
* @brief Scrivere un programma che visualizzi tutte le coppie di numeri
*        la cui somma è 15. 
* 
* @author daniele menicucci
* @date 5/11/2022
*/

#include <stdio.h>				 // definisco libreria  

int main() 
{
	int a, b;          // dichiaro le variabili

	printf("\n--Esercizio B daniele menicucci--\n\n");

    for(a=1; a<8; a++)             //inizializzo ciclo for 

        for(b=1; b<15; b++)        //inizzializzo secondo ciclo for

            if(a+b==15)				//controllo che la somma dia 15
            
                printf("%d e %d\n", a, b);		// stampo le coppie di numeri
}

