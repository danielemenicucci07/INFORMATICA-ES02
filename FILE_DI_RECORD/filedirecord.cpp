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

    //r=contacog("studenti.dat", "menicucci");
    printf("\nmenicucci: %d\n", r);

    //stampamedia("studenti.dat");

    r=contaRecord("studenti.dat");
    printf("\ndimensione file: %d record\n", r);
    
}

void crea(char file[])
{
    alunno t;
    FILE * puntfile = fopen(file, "ab");// ab perche sono file binari

    if(puntfile!=NULL)
	{
        for(int i=0;i<T;i++)
        {
        
            printf("inserisci il cognome che vuoi cercare: ");
            scanf("%s", t.cognome);

            t.nascita.gg=rand()%30+1;
            t.nascita.mm=rand()%12+1;
            t.nascita.aa=rand()%30+1990;

            for(int j = 0; j<V; j++) 
			{
                t.voti[j] = rand()%10+1;
            }

            fwrite(&t,sizeof(alunno),1,puntfile);
        }
    }
    fclose(puntfile);
}


void stampa(char file[])
{
    FILE * puntfile = fopen(file, "rb");// rb perche sono file binari
    alunno t;
    if(puntfile!=NULL)
	{
        while(!feof(puntfile))
        {
            fread(&t,sizeof(alunno),1,puntfile);
            printf("cognome: %s\n", t.cognome);
            printf("giorno di nascita: %d/%d/%d\n", t.nascita.gg, t.nascita.mm, t.nascita.aa);
            printf("*voti*\n");
            for(int j=0;j<V;j++)
			{
                printf("%d\t", t.voti[j]);
            }
            printf("\n\n");
        }
    }
    fclose(puntfile);
}

int contacog(char file[], char z[])
{
    FILE * puntfile = fopen(file, "rb");// rb perche sono file binari

    alunno t;
    int c=0;

    if(puntfile!=NULL){
        while(!feof(puntfile))
        {
            fread(&t,sizeof(alunno),1,puntfile);

            if(strcmp(t.cognome,z)==0) 
			{
				c++;
			}
			
			if(c==0)
			{
				return -1;
			}
        }
    }
    fclose(puntfile);

    return c;
}

void stampamedia(char file[])
{
    FILE * puntfile = fopen(file,"rb");// rb perche sono file binari
    alunno t;
    int m=0,max=0,min=10;

    if(puntfile!=NULL){
        while(!feof(puntfile))
        {
            fread(&t,sizeof(alunno),1,puntfile);
            
            printf("cognome: %s\n", t.cognome);
            for(int j=0;j<V;j++)
            {
                m+=t.voti[j];

                if(max<t.voti[j])
				{
                	max=t.voti[j];
				}

                if(min>t.voti[j])
				{
                	min = t.voti[j];
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
    fclose(puntfile);
}

int contaRecord(char file[])
{
    FILE * puntfile = fopen(file, "rb");// rb perche sono file binari

    int d=-1;

    if(puntfile!=NULL)
    {
        fseek(puntfile,0,SEEK_END);
        d=ftell(puntfile);
    }
    d/=sizeof(alunno);
    return d;

}
