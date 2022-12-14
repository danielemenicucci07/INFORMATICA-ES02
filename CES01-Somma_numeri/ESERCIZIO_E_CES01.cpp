#include <stdio.h>

int main() 
{
	
	float a,b,c;
	
	printf("Inserisci il valore del primo lato");
	scanf("%f",&a);
	printf("inserisci il valore del secondo lato");
	scanf("%f",&b);
	printf("inserisci il valore del terzo lato");
	scanf("%f",&c);
	
	if (a==b || b==c || c==a )
		if (a==b && b==c)
			printf("E' un triangolo equilatero");
		else
			printf("E' un triangolo isoscele");
	else 
		printf("E' un triangolo scaleno");
}
