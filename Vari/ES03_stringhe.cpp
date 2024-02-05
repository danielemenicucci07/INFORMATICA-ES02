#include <stdio.h>
#include <string.h>



#define R 10
#define C 20

//Daniele Menicucci 27/09/2023  4H


//carica stringa
void caricastr(char[][C]);

//stampa stringa
void stampastr(char[][C]);

//trova l'indice della stringa contenente la parola piu lunga
int indicelunga(char[][C]);

/*nella funzione si scambiano tra di loro le stringhe di indice k e t .  
Eseguita la funzione la stringa della riga k+1 (indice k)  si trovi nella riga t+1 e quella della riga t+1 si trovi nella riga k+1 */
void scambia(char[][C], int, int);

// la funzione restituisce l’indice della stringa che è la prima in ordine alfabetico
int primaalfabeto(char[][C]);

// terminata l’esecuzione della funzione, tutte le stringhe sono in ordine alfabetico
void ordina(char[][C]);


int main()
{
	char stmat[R][C];
	int r;
	
	
	printf("inserisci '*' per terminare la parola (max 19 caratteri,'*')\n\n");
	caricastr(stmat);
	
	//stampastr(stmat);
	
	r=indicelunga(stmat);
	printf(" la parola piu' lunga e': %s",stmat[r]);
	
	scambia(stmat,5,6);
    stampastr(stmat);

    r=primaalfabeto(stmat);
    printf("\n\nprima parola in ordine alfabetico: %d\n\n",r+1);

    ordina(stmat);
    stampastr(stmat);
	
}
//questo programma carica la stringa
void caricastr(char s[][C])
{
	int i=0;
	
	printf("**carica stringa**\n\n");
	printf("inserisci un carattere (max 19 caratteri):\n");
	for(i=0;i<R;i++)
	{
		scanf("%s",s[i]);
	}
}
//questo programma stampa la stringa
void stampastr(char s[][C])
{
	int i=0;
	printf("\n\n");
	for(i=0;i<R;i++)
	{
		printf("%2d%s\n",strlen (s[i]),s[i]);
	}
	printf("\n\n");

}
//questo programma trova l'indice della stringa con la parola più lunga
int indicelunga(char s[][C])
{
	int max=0;
	int i=0;
	for(i=1;i<R;i++)
	{
		if(strlen (s[i])>strlen(s[max]))
		{
			max=i;
		}
	}
	
	return max;
}
/*nella funzione si scambiano tra di loro le stringhe di indice k e t .  
Eseguita la funzione la stringa della riga k+1 (indice k)  si trovi nella riga t+1 e quella della riga t+1 si trovi nella riga k+1 */
void scambia(char stmat[][C],int k,int t)
{
    char x[C];
    strcpy(x,stmat[k]);
    strcpy(stmat[k],stmat[t]);
    strcpy(stmat[t],x);
}
// la funzione restituisce l’indice della stringa che è la prima in ordine alfabetico
int primaAlfabeto(char stmat[][C])
{
    int indiceprima=0;

    for(int i=1; i<R;i++)
    {
        if(strcmp(stmat[indiceprima],stmat[i])>0) indiceprima=i;
    }
 
    return indiceprima;
}
// terminata l’esecuzione della funzione, tutte le stringhe sono in ordine alfabetico
void ordina(char stmat[][C])
{
    for(int i=0;i<R-1;i++)
    {
        for(int j=i+1;j<R;j++)
        {
            if(strcmp(stmat[i],stmat[j])>0)
            {
                scambia(stmat,i,j);
            }
        }
    }
}
