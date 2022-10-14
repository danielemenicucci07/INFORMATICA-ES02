/******************************************************************************
   file: media di tre numeri con la virgola, più visualizzazione dei primi due numeri decimali*
   autore: menicucci daniele                                                   *
   data: 28/09/2022                                                            *
   ****************************************************************************/
   #include <stdio.h>
   int main()
   // dichiara variabili di input
   {int num1, num2, num3;
   int media;
   // dichiara variabili di output 
   
   printf("inserisci il primo numero ");
   scanf("%d",&num1);
   printf("inserisci il secondo numero ");
   scanf("%d",&num2);
   printf("inserisci il terzo numero ");
   scanf("%d",&num3);
   media = (num1+num2+num3) /3;
   printf("la media finale dei numeri e' %d ", media);
   return 0;
   } 
