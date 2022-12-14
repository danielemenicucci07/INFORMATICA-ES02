/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author daniele menicucci
* @date 6/12/2022
*/

#include <stdio.h>		//definisco librerie

int main() 
{
	int n, i;			//dichiaro le variabili
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	
	for(i = 2; i < n; i++)		
	{
		if(n%i==0)								//controllo se l'indice e' un divisore vedendo se la divisione da resto 0
			printf("%d e' un divisore\n", i);		
	}	
}
