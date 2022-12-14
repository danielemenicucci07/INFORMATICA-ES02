 /********************
 AUTORE= menicucci daniele
 3 H
 DATA: 30/09/2022
 FILE: calcolo area del rombo
 **********************/
 #include <stdio.h>
 #include <math.h>
 
 int main()
 {float lato,diag_min;// input
 float diag_mag;// di lavoro
 float perimetro, area;// output
 printf("inserisici il lato ");
 scanf("%f",&lato);
 printf("inserisci diagonale minore");
 scanf("%f",&diag_min);
 
 
 perimetro = lato *4;
 diag_mag = sqrt((lato*lato) - (diag_min/2*diag_min/2));
 
 
 area= (diag_min*diag_mag)/2;
 printf("il perimetro e' %f" ,perimetro);
 printf("l'area e' %f ", area);
 return 0;
 }
