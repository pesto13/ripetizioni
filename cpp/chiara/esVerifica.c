#include<stdio.h>
#include<math.h>


int calcolaFattoriale(int fattoriale);


int main(){

    int n1, n2;
    int fattoriale1, fattoriale2;
    int risultato = 1;
    printf("Inserisci n1: ");
    scanf("%d", &n1);

    printf("Inserisci n2: ");
    scanf("%d", &n2);

    fattoriale1 = calcolaFattoriale(n1);
    fattoriale2 = calcolaFattoriale(n2);

    risultato = fattoriale1 - fattoriale2;

    printf("La differenza: %d", risultato);

    return 0;

}



int calcolaFattoriale(int fattoriale){
    int i;
    int risultato = 1;

    for(i=1;i<=fattoriale;i++){
        risultato = risultato * i;
    }
    return risultato;
}