#include <stdio.h>

int main() {
  float importoIn;
  float importoOut;
  
  printf("Inserisci ammontare della spesa: ");
  scanf("%f", &importoIn);
  
  if (importoIn>50){
    if(importoIn>100) {
      importoOut = importoIn/100*90;
    } else {
       importoOut = importoIn/100*95;
      }
    printf("L'importo scontato e' %.2f", importoOut);
}
 else {
  printf("per prezzi inferiori o uguali a 50 euro non applichiamo sconti ");
  }
}


