#include<stdio.h>


int main(){

    float saldo, interesse, soglia;
    int anni = 0;
    printf("Inserisci saldo iniziale: ");
    scanf("%f", &saldo);
    printf("Inserisci interesse: ");
    scanf("%f", &interesse);
    printf("Inserisci soglia: ");
    scanf("%f", &soglia);

    while(saldo<soglia)
    {
        anni++;
        saldo = saldo + (saldo * interesse / 100);
    }
    
    printf("Sono passati: %d anni", anni);
    
    return 0;
}