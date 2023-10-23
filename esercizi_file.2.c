#include <stdio.h>
#include <stdlib.h>
//getc Restituisce il carattere letto
//putc o fputc 




void CopiaFile(char [],char[]);




int main()
{
	CopiaFile("inn.txt","out.txt");
}

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
