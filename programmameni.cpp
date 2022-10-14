/******************        *
 * menicucci daniele       *
 * 3 H                     *
 * 26/09/2022              *
 * calcola area triangolo  *
  */



#include <stdio.h>
int main ()
{
	float base, altezza; // input
	float area;// output
	printf("inserisci la base");
	scanf("%f",&base);
	printf("insersci altezza");
	scanf("%f",&altezza);
	area= base*altezza;
	printf("area e'%f",area);
	return 0;
}
