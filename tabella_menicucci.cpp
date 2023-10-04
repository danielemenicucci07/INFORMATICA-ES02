#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 15
#define V 4
#define C 2


// MENICUCCI DANIELE 4H LAVORO SUI RECORD


struct data//inizializzo record
{
	int gg;
	char mese[N];
	int aa;
} typedef data;

 struct studente//inizializzo record
{
	char cog[N];
	char nome[N];
	data nascita;
	int voti[V];
} typedef studente;

void caricaTab(studente []);

void stampaTab(studente []);

int main()
{
	srand(time(NULL));
	studente tab[C];
	
	caricaTab(tab);//chiamo la funzione carica nel main
	
	stampaTab(tab);//chiamo la funzione stampa nel main 
	
}

void caricaTab(studente t[]) //inizializzo funzione carica tabella
{
	int i=0;
	int j=0;
	for(i=0;i<C;i++)
	{
		printf("inserisci il tuo cognome: ");
		scanf("%s",t[i].cog);
		printf("inserisci il tuo nome: ");
		scanf("%s",t[i].nome);
		printf("inserisci il giorno in cui sei nato: ");
		scanf("%d",&t[i].nascita.gg);
		printf("inserisci il mese in cui sei nato: ");
		scanf("%s",t[i].nascita.mese);
		printf("inserisci l'anno di nascita: ");
		scanf("%d",&t[i].nascita.aa);
	
		for(j=0;j<V;j++)
		{
			t[i].voti[j]=rand()%10+1;
		}
	
	}
}

void stampaTab(studente t[])//inizializzo la funzione stampaTab
{
	int i=0;
	int j=0;
	printf("COGNOME\t\t");
	printf("NOME\t\t");
	printf("DATA\t\t");
	printf("\tVOTI");
	printf("\n\n");
	
	for(j=0;j<C;j++)
	{
		printf("%-15s",t[j].cog);
		printf("%-15s",t[j].nome);
		printf("%3d/",t[j].nascita.gg);
		printf("%s/",t[j].nascita.mese);
		printf("%-4d\t",t[j].nascita.aa);
	
		for(i=0;i<V;i++)//faccio un ciclo for che mi stampi 10 voti in modo randomico
		{
			printf("%4d",t[j].voti[i]);
		}
		
		printf("\n\n");

	}
	
}

