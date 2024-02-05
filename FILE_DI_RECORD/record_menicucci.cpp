#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 15
#define V 10

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

void stampa(studente);

int main()
{
	studente s1,s2;//dichiarazione variabile di tipo studente
	int i;
	
	srand(time(NULL));
	printf("inserisci il tuo cognome: ");
	scanf("%s",s1.cog);
	printf("inserisci il tuo nome: ");
	scanf("%s",s1.nome);
	printf("inserisci il giorno in cui sei nato: ");
	scanf("%d",&s1.nascita.gg);
	printf("inserisci il mese in cui sei nato: ");
	scanf("%s",s1.nascita.mese);
	printf("inserisci l'anno di nascita: ");
	scanf("%d",&s1.nascita.aa);
	
	for(i=0;i<V;i++)
	{
		s1.voti[i]=rand()%10+1;
	}
	
	//printf("matricola 1:");
	//stampa(s1)
	s2=s1;//copio s1 in s2 tramite assegnazione
	printf("matricola 2:\n\n");
	stampa(s2);
}

void stampa(studente s1)
{
	int i=0;
	printf("cognome: %s\n",s1.cog);
	printf("nome: %s\n",s1.nome);
	printf("data: %2d/",s1.nascita.gg);
	printf("%s/",s1.nascita.mese);
	printf("%2d\n\n",s1.nascita.aa);
	
	for(i=0;i<V;i++)//faccio un ciclo for che mi stampi 10 voti in modo randomico
	{
		printf("voto: %d\n",s1.voti[i]);
	}
	
}
