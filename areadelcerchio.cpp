 /********************
 Autore= menicucci daniele
 3 H
 Data: 30/09/2022
 FILE: calcolo area del cerchio
 **********************/
 #include <stdio.h>
 #define PI_GRECO 3.14
 int main()
 {float raggio;// input
 float area; 
 printf("inserisici il raggio ");
 scanf("%f",&raggio);
 area = raggio * raggio * PI_GRECO;
 printf("l'area e' %f" ,area);
 return 0;
 }
