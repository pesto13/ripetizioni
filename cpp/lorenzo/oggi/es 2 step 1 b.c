/*Scrivere un programma che, dati due array di interi di dimensione n, ne costruisca un terzo di dimensione 2n
 i cui elementi di posizione pari siano gli elementi del primo array e gli elementi di posizione dispari siano
 gli elementi del secondo array. Il programma dovr� svolgere le seguenti operazioni a scelta dell'utente:
- inserimento primo e secondo array;
- creazione del terzo array;
- inversione degli elementi del terzo array;
- visualizzazione di tutti e tre gli array.*/

#include <stdio.h>
#include <stdlib.h>

#include "library.h"



int main()
{
    int scelta, n;
    int num1[MAX];
    int num2[MAX];
    int num3[2*MAX];
    int max;
    int min;

do{


    scelta = menu(scelta);

    switch(scelta){

    case 1 :
            n = dimensione();

            readNumbers(num1, n);
            readNumbers(num2, n);

        break;
    case 2:
            creaTerzo(num1, num2, num3, n);
        break;
    case 3 :
            inversione(num3,n * 2);
        break;
    case 4 :

        stampa(num1, n);
        stampa(num2, n);
        stampa(num3, n*2);

        break;
    case 5 :
        ordineArray(num1,n);
        break;
    case 6 :
        max = massimo(num1, n);
        min = minimo(num1, n);
        
        printf("massimo = %d; minimo = %d", max, min);


    }
}while(scelta != 7);
    return 0;
}

