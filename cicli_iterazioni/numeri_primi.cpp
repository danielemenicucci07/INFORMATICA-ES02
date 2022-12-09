/** ****************************************************************************************
* 
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. 
*        Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo ciascun 
*        numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
* 
* @author daniele menicucci
* @date 30/11/2022
*/

#include <stdio.h>			 // definisco libreria  

int main()  
{
   

   
    int t1, t2, c=1;        //dichiaro variabili di lavoro

    for(t1=2; t1<101; t1++) {    //inizializzo ciclo for   
        
        for(t2 = 2; t2<t1; t2++) {      //inizizzializzo secondo ciclo for
            if(t1 % t2 == 0) 		//controllo che la divisione dia resto 0
                c=0;          
            
        }

       
        if(c)       
            printf("%d e' un numero primo \n", t1);
        
        
        c=1;
    }
}

