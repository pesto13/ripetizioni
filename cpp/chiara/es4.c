#include<stdio.h>


int main(){

    int numeri = 0, quantiNumeri = 0, prima = 0;

    printf("Inserisci numeri: ");
    scanf("%d", &numeri);

    do{
        quantiNumeri++;
        
        prima = numeri;

        printf("Inserisci numeri: ");
        scanf("%d", &numeri);
    

    }while(numeri>prima);


    printf("numeri in ordine crescente: %d", quantiNumeri);

    return 0;
}