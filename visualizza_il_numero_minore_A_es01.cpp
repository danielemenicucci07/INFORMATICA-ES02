#include <stdio.h>
int main()
{
	int a,b;
	printf("inserisci il primo numero");
	scanf("%d",&a);
	printf("inserisci il secondo numero");
	scanf("%d",&b);
	
	if (a<b)
	{
		printf("il numero minore e' %d",a);
	}
	else
	{
	
		printf(" il numero minore e'%d",b);
	}
	return 0;
}
