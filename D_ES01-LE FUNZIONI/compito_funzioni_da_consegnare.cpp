/** ****************************************************************************************
* @brief Scrivere un programma dove all'interno vengono gestite tutte le funzioni
* @author Daniele Menicucci
* @version 1.0 13/01/2023 <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>
#include <limits.h>
#include<stdlib.h>
/** ****************************************************************************************
* @brief somma i divisori di un intero
* @param  il parametro e' l'intero di cui bisogna sommare i divisori
* @retval somma di tutti i divisori
*/
int somma_divisori(int );

/** ****************************************************************************************
* @brief calcola l'MCD di due interi
* @param  i parametri sono due interi di cui si dovr? calcolare l'MCD
* @retval l'MCD
*/
int mcd(int ,int );

/** ****************************************************************************************
* @brief Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e l'altezza di un rettangolo e restituisce l'area. 
* @param  i parametri sono due interi di cui si dovr? calcolare l'area del rettangolo
* @retval area rettangolo
*/
int area_rettangolo(int ,int );

/** ****************************************************************************************
* @brief Scrivere una funzione chiamata menu che mi fa sciegliere all'utente che funzione usare. 
* @param  non ci sono  parametri
* @retval una funzione a scelta dell'utente
*/
int menu();


int  main()
{
	int num;
	int r;
	int u; /*contiene le funzioni nello switch*/
	int num2;
	int risp; /*contiene la risposta edll'utente quando digita un numero nel menu*/
	do{
	
		
	r=menu();

	switch(r)
	{
		case 0:printf("il programma e' finito ");
			   break;
		case 1:printf("**HAI SCELTO DI SOMMARE I DVISORI**\n");
			   printf("inserisci un numero: ");
			   scanf("%d",&num);
			   printf("\n");
			   
			   u=somma_divisori(num);
			   printf("la somma dei divisori e': %d\n\n",u);
			   break;
		case 2:printf("**HAI SCELTO DI TROVARE L'MCD**\n");
			   printf("inserisci un numero: ");
			   scanf("%d",&num);
			   printf("inserisci un numero: ");
			   scanf("%d",&num2);
			   printf("\n");
			   
			   u=mcd(num,num2);
			   printf("il massimo comun divisore e': %d\n\n",u);
			   break;
		case 3:printf("**HAI SCELTO DI CALCOLARE L'AREA DEL RETTANGOLO**\n");
			   printf("inserisci la base del rettangolo: ");
			   scanf("%d",&num);
			   printf("inserisci l'altezza' del rettangolo: ");
			   scanf("%d",&num2);
			   printf("\n");
			   
			   u=area_rettangolo(num,num2);
			   printf("l'area del rettangolo e': %d\n\n",u);
			   break;
	}
	system("pause");
	
	}while(r!=0);
	
}
int menu()
{
	int risp;
	system("cls");
	
	printf("digita 1 se vuoi sommare tutti i divisori di un numero che inserisci\n\n");
	printf("digita 2 se vuoi calcolare il massimo comun divisore tra due numeri\n\n");
	printf("digita 3 se vuoi trovare l'area di un rettangolo\n\n");
	printf("digita 0 se vuoi uscire dal programma\n");
	
	scanf("%d",&risp);
	
	
	return risp;
	
}

int somma_divisori(int x)
{
	int i;
	int s=0;
	
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			/*printf("%d\n",i); istruzione utile nel test per verificare quali siano i divisori*/
			s=s+i;
		}
	}
	return s;
}
int mcd(int x,int y)
{
	int r;

	int rest;
	
	while(y!=0)
{
		
	rest=(x%y);
	x=y;
	y=rest;
	
}
	return x;
	
}

int area_rettangolo(int x,int y)
{
	int r;
	int area;
	
	area=(x*y);
	return area;
}
