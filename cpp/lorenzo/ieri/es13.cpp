#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
    int numStu[MAX];
    int numPart[MAX];
    int costoStu[MAX];
    int i = 0,costoTot = 0,nClassi = 0,prezzo = 0,scelta = 0,k = 0, nClassi=0;

    for(i = 0; i < MAX;i++){

        printf("\n Numero studenti: ");
        scanf("%d", &numStu[i]);
        printf("\n Numero partecipanti: ");
        scanf("%d", &numPart[i]);
        printf("\n Costo per studente: ");
        scanf("%d", &costoStu[i]);
 
    }
    do{
        printf("\n 1. ");
        printf("\n 1. ");
        printf("\n 1. ");

        printf("\n inserire scelta: ");
        scanf("%d", &scelta);
    }while(scelta < 1 || scelta > 3 )

    switch (scelta)
    {
    case 1:
    do{
 printf("\n Inserisci k: ");
        scanf("%d", &k);
    }while(k < 0);
       
        printf("\n Partecipanti: %d", numStu[k]);
        costoTot = costoStu[k] * numPart[k];
        printf("\n Costo totale : %d", costoTot);
        break;
    
    case 2:
    for(i = 0; i < MAX;i++){
        if((numPart[i] / numStu[i] * 100) >= 70 ){
            nClassi++;

        }


    }
    printf("\n Numero classi %d", nClassi);
        break;
    }
   
}
