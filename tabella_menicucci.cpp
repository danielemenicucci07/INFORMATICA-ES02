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
	int matricola;
	char cognome[N];
	char nome[N];
	data nascita;
	int voti[V];
} typedef studente;

void caricaTab(studente []);//dichiaro la funzione carica

void stampaTab(studente []);//dichiaro la funzione stampa

int ricercCog(studente [],char []);//dichiaro la funzione ricerca cognome

int stampaMedia(studente []);//dichiaro la funzione stampa media

int Studenti10(studente []);//dichiaro la funzione studenti10

void CaricaRecord(studente []);//dichiaro la funzione carica 2.0

void StampaRecord(studente []);//dichiaro la funzione stampa 2.0

void OrdinaCognome(studente []);//dichiaro la funzione ordina

int cercaMese(studente [],char []);//dichiaro la funziona cerca mese

int main()
{
	srand(time(NULL));
	studente tab[C];
	char cognome[N];
	int r;
	studente s1;
	char mese[N];
	
	caricaTab(tab);//chiamo la funzione carica nel main
	
	stampaTab(tab);//chiamo la funzione stampa nel main 
	
	printf("inserisci il cognome che vuoi trovare: ");
	scanf("%s",cognome);
	r= ricercCog(tab,cognome);//chiamo la funzione ricerca cognome
	if(r!=-1)
	printf("\n\n il cognome e':%s\tl'indice di riga del cognome e':%d",tab[r],r);
	else
	printf("cognome non trovato");
	
	r=stampaMedia(tab);//chiamo la funzione stampa media voti
	printf("\n\n%d studenti hanno la media >= a 6",r);
	
	r=Studenti10(tab);//chiamo la funzione studenti10
	printf("\n\n%d studenti hanno almeno un 10 nei voti\n\n",r);
	
	//CaricaRecord(&s1);;//carica tabella 2.0
	
	//StampaRecord(s1);//stampa tabella 2.0
	
	OrdinaCognome(tab);//chiamo la funzione Ordina nel main
	stampaTab(tab);//chiamo la funzione stampa nel main
	
	printf("\n\nche mese vuoi trovare: ");
	scanf("%s",mese);
	r= cercaMese(tab,mese);
	if(r!=-1)
	printf("il mese e': %s e si trova sulla riga %d",tab[r],r);
	else
	printf("mese non trovato");
	
	
}
//carica tabella con informazioni chieste all’utente e/o generate con random 
void caricaTab(studente t[]) //inizializzo funzione carica tabella
{
	int i=0;
	int j=0;
	for(i=0;i<C;i++)
	{
		t[i].matricola=i+1;
		printf("inserisci il tuo cognome: ");
		scanf("%s",t[i].cognome);
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
//stampa tabella su monitor: si curi quanto viene visualizzato allineando colonne e andando a capo per ogni riga, ecc.
void stampaTab(studente t[])//inizializzo la funzione stampaTab
{
	int i=0;
	int j=0;
	printf("COGNOME\t\t");
	printf("NOME\t\t");
	printf("DATA\t\t");
	printf(" VOTI");
	printf("\n\n");
	
	for(j=0;j<C;j++)
	{
		printf("%-15s",t[j].cognome);
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
/*ricerca cognome restituendo indice di riga; se trovato, nel main si visualizzi il nome dello studente, 
altrimenti si visualizzi “cognome non trovato”*/
int ricercCog(studente t[],char cog[])//inizializzo funzione ricerca cognome
{
	int j=0;
	
	for(j=0;j<C;j++)
	{
		if(strcmp(t[j].cognome,cog)==0)	return j;
	}
	return -1;
}
/*stampa su monitor il cognome dello studente seguito dalla media dei suoi voti. 
La funzione restituisce quante medie sono maggiori o uguali a 6 e,
nel main si effettui printf opportuna (es. x studenti hanno media dei voti >= di 6)*/
int stampaMedia(studente t[])//inizializzo funzione stampa media
{
	int i=0;
	float m=0;
	int c=0;
	int j=0;
	
	for(i=0;i<C;i++,m=0)
	{
		for(j=0;j<V;j++)
		m=m+t[i].voti[j];
		m=m/V;
		if(m>=6) c++;
		printf("\n\nla media voti dello studente %s e': %.2f", t[i].cognome,m);
	}
	return c;
}
/*nella funzione si contano quanti studente hanno almeno un voto = 10. La funzione restituisce il valore. N. B. : non si chiede quanti 
10 ma quanti studenti, cioè lo studente che ha più di un 10, va contato solo una volta*/
int Studenti10(studente t[])
{
	int i=0;
	int j=0;
	int c=0;
	
	for(i=0;i<C;i++)
	{
		for(j=0;j<V;j++)
		if(t[i].voti[j]==10)
		c++;
		j=V;
	}
	
	return c;
}
//carica tabella richiamando caricaTab
/*void CaricaTabella(studente t[])
{
	int i=0;
	for(i=0;i<C;i++)
	{
		caricaRecord(t);
	}
}
//stampa tabella richiamando la funzione tabella
void StampaTabella(studente t[])
{
	int i=0;
	for(i=0;i<C;i++)
	{
		stampaRecord(t);
	}
}*/
//ordinamento tabella dei cognomi
void OrdinaCognome(studente t[])
{
	int i=0;
	int j=0;
	studente z;
	
	for(i=0;i<C-1;i++)
	{
		for(j=i+1;j<C;j++)
		{
			if(strcmp(t[i].cognome,t[j].cognome)>0)
			{
				z=t[i];
				t[i]=t[j];
				t[j]=z;
			}
			
		}
	}
}

void caricaRecord(studente *s)
{
	int i;
	
	srand(time(NULL));
	printf("inserisci il tuo cognome: ");
	scanf("%s",s->cognome);
	printf("inserisci il tuo nome: ");
	scanf("%s",s->nome);
	printf("inserisci il giorno in cui sei nato: ");
	scanf("%d",&s->nascita.gg);
	printf("inserisci il mese in cui sei nato: ");
	scanf("%s",s->nascita.mese);
	printf("inserisci l'anno di nascita: ");
	scanf("%d",&s->nascita.aa);
	
	for(i=0;i<V;i++)
	{
		s->voti[i]=rand()%10+1;
	}
}

void stampa(studente s1)
{
	int i=0;
	printf("cognome: %s\n",s1.cognome);
	printf("nome: %s\n",s1.nome);
	printf("data: %2d/",s1.nascita.gg);
	printf("%s/",s1.nascita.mese);
	printf("%2d\n",s1.nascita.aa);
	
	for(i=0;i<V;i++)//faccio un ciclo for che mi stampi 10 voti in modo randomico
	{
		printf("voto: %d\n\n",s1.voti[i]);
	}
	
}

int cercaMese(studente t[],char m[])
{
	int i=0;
	
	for(i=0;i<C;i++)
	{
		if(strcmp(t[i].nascita.mese,m)==0)
		return i;
	}
	
	return -1;
}
