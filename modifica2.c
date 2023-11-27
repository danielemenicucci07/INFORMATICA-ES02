/*DANIELE MENICUCCI
  4H
  00/11/2023
  Dichiarazione, definizione e chiamata della funzione che riscrive completamente
  l' n-esimo record del file con informazioni chieste all'utente nella funzione stessa. Parametri della funzione: nome file e intero n
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

#define N 20
#define V 8
#define T 5

struct data 
{
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

void modifica( char[], char[], char[]);//Si sostituisca su file il cognome1 (per tutte le occorrenze presenti nel file) con cognome2.
//Si restituisca quante volte è stato incontrato cognome1

void modifica2(char [],int );//Dichiarazione, definizione e chiamata della funzione che riscrive completamente
//l' n-esimo record del file con informazioni chieste all'utente nella funzione stessa. Parametri della funzione: nome file e intero n


int main()
{
	crea("modifica.dat");
	
	modifica("modifica2.dat","sollo","menicucci");



}
void crea(char file[])
{
    alunno buffer;
    FILE * puntfile = fopen(file, "ab");// ab perche sono file binari

    if(puntfile!=NULL)// controllo se c'è un errore nell'apertura
	{
        for(int i=0;i<T;i++)
        {
        
            printf("inserisci il cognome che vuoi cercare: ");
            scanf("%s",buffer.cognome);

            buffer.nascita.gg=rand()%30+1;//genero il giorno
            buffer.nascita.mm=rand()%12+1;//genero il mese
            buffer.nascita.aa=rand()%32+1990;//genero l'anno

            for(int j=0;j<V;j++) 
			{
                buffer.voti[j] = rand()%10+1;//genero i voti
            }

            fwrite(&buffer,sizeof(alunno),1,puntfile);//faccio fwrite nel file puntfile
        }
    }
    fclose(puntfile);//chiudo il file
}

void modifica(char file[],char cog1[],char cog2[])
{
	FILE * puntfile = fopen(file,"rb");//apro il file in lettura 
	
	alunno buffer;
	
	if(puntfile!=NULL)//se il file si è aperto
	

	while(!feof(puntfile))//finchè il file non è finito
	{
		fread(&buffer,sizeof(alunno),1,puntfile);//leggo un record alla volta che ci è scritto sul file
		
		if(strcmp(buffer.cognome,cog1)==0)//se il cognome è uguale a quello che cerco
		{
			strcpy(buffer.cognome,cog2);//sostituisco il cognome
			fseek(puntfile,-sizeof(alunno),SEEK_CUR);//mi riposiziono sulla posizione corretta tornando indietro di una posizione
			fwrite(&buffer,sizeof(alunno),1,puntfile);//scrivo la modifica sul file
		}
	}
	
	fclose(puntfile);
	//chiudo il file
}

modifica2(char file,int k)
{
    int c;
    studente buffer;
    FILE * puntfile = fopen(file,"rb+")//rb+ perchè devo leggere e scrivere

    if(puntfile!=NULL)
    {
        c=fseek(puntfile,k*sizeof(studente)SEEK_SET)//mi posiziono sul 5° record
        if(c==0)//controllo se ha trovato il record(restituisce 0 se ha trovato il record)
        {
            printf("inserisci il cognome dell'alunno: ");
            scanf("%s",buffer.cognome);
            printf("inserisc il nome dell'alunno: ");
            scanf("%s",buffer.nome);

            buffer.nascita.gg=rand()%30+1;//genero il giorno
            buffer.nascita.mm=rand()%12+1;//genero il mese
            buffer.nascita.aa=rand()%32+1990;//genero l'anno

            for(int j=0;j<V;j++) 
			{
                buffer.voti[j] = rand()%10+1;//genero i voti
            }

            fwrite(&buffer,sizeof(alunno),1,puntfile);//faccio fwrite nel file puntfile
        }
    }


}
