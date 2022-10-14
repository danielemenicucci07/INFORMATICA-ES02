/*********************************************************
File= trasforma un numero da secondi a ore ee minuti     *
Autore= Menicucci Daniele                                *
Classe= 3H                                               *
Data= 30/09/2022                                         *
*********************************************************/
#include <stdio.h>
int main()
{
  int secondi;  //input
  
  int ore, minuti;  //output
  
  printf("programma di menicucci daniele\n");

  printf("Inserisci i secondi: ");   //richiesta input
  
  scanf("%d", &secondi);  //lettura input

  minuti = (secondi - secondi % 60) / 60; //calcolo minuti
  
  ore = (minuti - minuti % 60) / 60;  //calcolo ore
  
  secondi = secondi % 60;   //calcolo minuti 
  
  minuti = minuti % 60;     //calcolo secondi 

  printf("Ore: %d, Minuti: %d, Secondi: %d", ore, minuti, secondi); //stampa risultato
  return 0;
}
