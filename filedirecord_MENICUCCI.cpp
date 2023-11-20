#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 20
#define V 8
#define T 5

struct data {
    int gg;
    int mm;
    int aa;
} typedef data;

struct alunno {
    char cognome[N];
    data nascita;
    int voti[V];
} typedef alunno;

//funzione per scrivere un file di N record
void crea(char[]);

//funzione in C per leggere e stampare su monitor le informazioni del file di record (si usi il controllo di fine file e non 
//il ciclo for con N perché la funzione sia vali da quale che sia il numero di record del file (quindi anche diverso da N))
void stampa(char[]);

//conta quante volte è presente uno studente che ha il cognome uguale alla stringa passata in output; la funzione restituisce un intero
int contacog(char[],char[]);

//per ogni studente visualizza il suo cognome, la media dei suoi voti, il suo voto più alto e il suo voto più basso. 
void stampamedia(char[]);

//la funzione cerca un cognome nel file e restituisce la posizione della sua prima occorrenza.
int trovaprimo(char[],char[]);

//la funzione cerca un cognome nel file e restituisce la posizione della sua ultima occorrenza.
int trovaultimo(char[],char[]);

//Funzione che restituisce quanti record ci sono nel file.
int contaRecord(char[]);


int main()
{
    int r;

    srand(time(NULL));

    crea("studenti.dat");

    stampa("studenti.dat");

    r=contacog("studenti.dat", "menicucci");
    printf("\nmenicucci: %d\n", r);

    stampamedia("studenti.dat");

    r=contaRecord("studenti.dat");
    printf("\ndimensione file: %d record\n", r);
    
}

void crea(char file[])
{
    alunno t;
    FILE * puntfile = fopen(file, "ab");// ab perche sono file binari

    if(puntfile!=NULL)// controllo se c'è un errore nell'apertura
	{
        for(int i=0;i<T;i++)
        {
        
            printf("inserisci il cognome che vuoi cercare: ");
            scanf("%s", t.cognome);

            t.nascita.gg=rand()%30+1;//genero il giorno
            t.nascita.mm=rand()%12+1;//genero il mese
            t.nascita.aa=rand()%32+1990;//genero l'anno

            for(int j=0;j<V;j++) 
			{
                t.voti[j] = rand()%10+1;//genero i voti
            }

            fwrite(&t,sizeof(alunno),1,puntfile);//faccio fwrite nel file puntfile
        }
    }
    fclose(puntfile);//chiudo il file
}


void stampa(char file[])
{
    FILE * puntfile = fopen(file, "rb");// rb perche sono file binari
    alunno t;
    if(puntfile!=NULL)// controllo se c'è un errore nell'apertura
	{
        while(!feof(puntfile))//finchè il file non è finito
        {
            fread(&t,sizeof(alunno),1,puntfile);//leggo dal file il record
            printf("cognome: %s\n", t.cognome);
            printf("giorno di nascita: %d/%d/%d\n", t.nascita.gg, t.nascita.mm, t.nascita.aa);//stampo la nascita
            printf("*voti*\n");
            for(int j=0;j<V;j++)
			{
                printf("%d\t",t.voti[j]);
            }
            printf("\n\n");
        }
    }
    fclose(puntfile);//chiudo il file
}

int contacog(char file[], char z[])
{
    FILE * puntfile = fopen(file, "rb");// rb perche sono file binari

    alunno t;
    int c=0;

    if(puntfile!=NULL)// controllo se c'è un errore nell'apertura
	{
        while(!feof(puntfile))//finchè il file non è finito
        {
            fread(&t,sizeof(alunno),1,puntfile);

            if(strcmp(t.cognome,z)==0)//se il cognome è uguale a quello passato come parametro
			{
				c++;//aumento il contatore
			}
			
			if(c==0)//se il contatore è uguale a 0 cioè non ha trovato il cognome
			{
				return -1;//sstampo -1
			}
        }
    }
    fclose(puntfile);//chiudo il file

    return c;
}

void stampamedia(char file[])
{
    FILE * puntfile = fopen(file,"rb");// rb perche sono file binari
    alunno t;
    int m=0,max=0,min=10;//dichiaro le varibili con i corretti valori

    if(puntfile!=NULL)// controllo se c'è un errore nell'apertura
	{
        while(!feof(puntfile))//finchè il file non è finito
        {
            fread(&t,sizeof(alunno),1,puntfile);//leggo dal file il record
            
            printf("cognome: %s\n", t.cognome);
            for(int j=0;j<V;j++)
            {
                m+=t.voti[j];

                if(max<t.voti[j])//se il voto è maggiore di max
				{
                	max=t.voti[j];//max=voto
				}

                if(min>t.voti[j])//se il voto è minore di min
				{
                	min = t.voti[j];//min=voto
				}
            }
            m/=V;

            printf("media dei voti: %d\n", m);
            printf("massimo dei voti: %d\n", max);
            printf("minimo dei voti: %d\n", min);

            printf("\n\n");

            m=0;
            max=0;
            min=10;
        }
    }
    fclose(puntfile);//chiudo il file
}

int contaRecord(char file[])
{
    FILE * puntfile = fopen(file, "rb");// rb perche sono file binari

    int d=-1;

    if(puntfile!=NULL)// controllo se c'è un errore nell'apertura
    {
        fseek(puntfile,0,SEEK_END);//mi posiziono alla fine del file
        d=ftell(puntfile);//mi restituisce la posizione attuale(in questo caso alla fine del file) in byte
    }
    d/=sizeof(alunno);//divido il totale dei byte per la dimensione di un singolo record per trovare quanti record ci sono nel file
    return d;//stampo il numero di record

}
