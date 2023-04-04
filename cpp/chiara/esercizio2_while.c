#include<stdio.h>


int main(){

    int totaleAmmalati = 0, percentualeGuarigione = 0, contatore = 0;

    printf("Inserisci numero di ammalati: ");
    scanf("%d", &totaleAmmalati);
    printf("Inserisci percentuale di guarigione giornaliere: ");
    scanf("%d", &percentualeGuarigione);

    while(totaleAmmalati>=100){
        contatore++;
        totaleAmmalati = totaleAmmalati - (totaleAmmalati * percentualeGuarigione / 100);

    }

    printf("sono serviti: %d giorni", contatore);

    return 0;
}