#include <stdio.h>

int main() 
{
	
  int a,b,c;	//variabili di input
  int max, min;	//variabili di output
  	
  printf("inserisci il primo numero ");		
  scanf("%d",&a);
  printf("inserisci il secondo numero");
  scanf("%d",&b);
  printf("inserisci il terzo numero");
  scanf("%d",&c);
    
  if (a>b) {					
  	if (a>c) {									
  		max = a;								
  		if (c>b) {								
  			min = b;							
		  } else {								
		  	min = c;							
		  }										
	  } else {									
	  	max=c;									
	  	min=b;										
	  }											
  } else {						
  	if (b>c) {									
  		max = b;								
  		if (a>c) {								
  			min=c;								
		  } else {								
		  	min=a;								
			}									
	  } else {									
	  	max=c;									
	  	min=a;									
	  }											
  }													
  
  	
	printf(" il numero minore e'%d,il numero minore e %d", min, max);
	
}
