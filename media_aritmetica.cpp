/** ****************************************************************************************
*
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri 
*        inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento 
*        dei dati.
* 
* @author daniele menicucci
* @date 5/11/2022
*/

#include <stdio.h>       // definisco libreria  

int main() 
{

printf("\n--esercizio di daniele menicucci--\n\n");
	int num, cont=0, somma=0;       // dichiaro variabili  
    float media=0;              

    do 
    {                                          
        printf("Insersici un numero: ");
        scanf("%d", &num);

        media += num;

        if(num!=0) 		//inizializzo for
            cont++;                                
    } while (num!=0);          //inizializzo while               

    media /= cont;                 

    printf("\nLa media dei numeri e' %.2f\n", media);
}

