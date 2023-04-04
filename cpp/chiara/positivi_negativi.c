/* Creare un programma che continua a far inserire all’utente dei numeri interi,
il programma si ferma quando vengono inseriti più numeri negativi di quelli positivi. */

#include<stdio.h>


int main(){
    
    int numero;
    int nNegativi = 0, nPositivi = 0;

    while(nNegativi<=nPositivi){
        printf("Inserisci valore");
        scanf("%d", &numero);
        if(numero>0){
            nPositivi++;
        }
        if(numero<0){
            nNegativi++;
        }
    }


   

    return 0;
}