/******************        *
 * menicucci daniele       *
 * 3 H                     *
 * 12/10/2022              *
 *
 */



#include <stdio.h>
int main ()
{

int num;//input
int num1,num2,num3;

	printf("inserisci un numero compreso tra 100 e 999\n");
	scanf("%d",& num);
	num1= num / 100;
	num2= (num-num1*100)/10;
	num3= (num-(num1*100+num2*10));
	printf("%d \t %d \t %d \t",num1,num2,num3);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
