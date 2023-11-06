#include <stdio.h>
#include <stdlib.h>
//getc Restituisce il carattere letto
//putc o fputc scrive il carattere
//EOF end-of-file

int contal=-1;//conta lettere parte da -1 perchè mi conta anche il carattere di fine file
int contap=1;//conta parole, conta gli spazi e gli invii quindi la prima non la calcola e allora la facciamo partire da 1
int contar=1;//conta righe, conta gli invii quindi la prima non la calcola e allora la facciamo partire da 1 

void CopiaFile(char [],char[]);//dichiaro la funzione

void FileNomi(char[], char[]);//dichiaro la funzione

void ContaCaratteri(char[]);//dichiaro la funzione

void ContaNumeri(char[], char[], char[]);

void CesareCrypt(char[], char[], int );

void CesareDecrypt(char[],char [], int);

int main()
{
	CopiaFile("in.txt","out.txt");//file di testo
	FileNomi("nomi.txt","nomi2.txt");
	//ContaCaratteri("file.txt");
	//printf("lettere=%d\nparole=%d\nrighe=%d\n\n",contal,contap,contar);
	ContaNumeri("numeri.txt","pari.txt","dispari.txt");
	CesareCrypt("cesare.txt","cesareCrypt.txt",5);
	CesareDecrypt("cesareCrypt.txt","cesareDecrypt.txt",5);
}
/*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo.  
Il  programma  legge  carattere per carattere il contenuto del file in.txt e lo ricopia nel file out.txt.*/

void CopiaFile(char fin[],char fout[])
{
	char c;
	
	FILE* puntin=fopen(fin,"r");//apertura file in lettura
	
	FILE* puntout=fopen(fout,"w");//apertura file in scrittura
	
	if(puntin !=0 && puntout !=0)
	
	while((c=getc(puntin)) !=EOF) //EOF end-of-file //getc restituisce il carattere che sta leggendo finchè il carattere non è=EOF
	{
		fputc(c,puntout);
	}
		
}
/*Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT,  
dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli.*/
void FileNomi(char nomi[],char nomi2[])
{
	char c;//dichiaro variabile che conterrà i caratteri
	
	FILE* puntnomi=fopen(nomi,"r");//apertura file in lettura
	
	FILE* puntnomi2=fopen(nomi2,"w");//apertura file in scrittura
	
	while(!feof(puntnomi))//feof restituisce 1 se il file è finito, mettendo diverso= finchè il file non è finito
	{
		c=getc(puntnomi);
		
		if(c>='a' && c<='z')//controllo se è una lettera minuscolo
		{
			c=c-32;//trasformazione da minuscolo a maiuscolo
		}
		
		putc(c,puntnomi2);//copio ogni carattere che c'è in 'c' in nomi2
	}

	fclose(puntnomi);//chiudo il file nomi
	fclose(puntnomi2);//chiudo il file nomi2
	
}

//Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo (non gli spazi, tabulazioni e a capo)
void ContaCaratteri(char file[])
{
	char c;

	FILE * puntfile= fopen(file,"r");//apertura file in lettura

	
	while(!feof(puntfile))
	{
		c=getc(puntfile);
		
		if(c!=' ' && c!='\n')//controllo che il carattere sia diverso da uno spazio o da un invio
		{
			contal++;
		}
			if(c ==' ')//controllo che il carattere sia diverso da uno spazio
			{
				contap++;
			}
				if(c =='\n')//controllo che il carattere sia diverso da un invio
				{
					contap++;
					contar++;
				}
		
	}	
	
	fclose(puntfile);//chiude il file
}

/*Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)composto da una sequenza di numeri di una cifra 
separati da uno spazio bianco e successivamente scrive 2 file, pari.txt e dispari.txt, nei quali dovrai inserire i numeri 
che hai letto a seconda del loro valore pari o dispari*/
void ContaNumeri(char num[],char numpari[],char numdispari[])
{
	char c;
	int numero;
	
	FILE * puntnum = fopen(num,"r");//apertura file in lettura
	FILE * puntnumpari = fopen(numpari,"w");//apertura file in scrittura
	FILE * puntnumdispari = fopen(numdispari,"w");//apertura file in scrittura
	
	while(!feof(puntnum))
	{
		c=getc(puntnum);
		if(c%2==0)//controllo che il numero sia pari
		{
			putc(c,puntnumpari);
		}
			if(c%2==1)//controllo che il numero sia dispari
			{
				putc(c,puntnumdispari);
			}
	}
	
	fclose(puntnum);//chiude il file
	fclose(puntnumpari);//chiude il file
	fclose(puntnumdispari);//chiude il file
}

/*Scrivere le funzioni cesareCrypt e cesareDecrypt che criptano o decriptano un file in input di una chiave key, 
usando l’algoritmo di Cesare. Commentare adeguatamente il codice scritto.*/
void CesareCrypt(char cesare[], char cesareCrypt[], int k)
{
	FILE * puntcesare = fopen(cesare,"r");//apertura file in lettura
	FILE * puntcesareCrypt = fopen(cesareCrypt,"w");//apertura file in scrittura
	
	char c;
	
	while(!feof(puntcesare))
	{
		c=getc(puntcesare);
		if(c != '\n');
		c=c+k;
		
		putc(c,puntcesareCrypt);
	}
	
	fclose(puntcesare);
	fclose(puntcesareCrypt);
}


void DecryptCesare(char cesareCrypt[],char cesareDecrypt[], int k)
{
	FILE * puntcesareCrypt = fopen(cesareCrypt,"r");//apertura file in lettura
	FILE * puntcesareDecrypt = fopen(cesareDecrypt,"w");//apertura file in scrittura
	
	char c;
	
	while(!feof(puntcesareCrypt))
	{
		c=getc(puntcesareCrypt);
		if(c != '\n');
		c=c-k;
		
		putc(c,puntcesareDecrypt);
	}
	
	fclose(puntcesareCrypt);
	fclose(puntcesareDecrypt);
}
