/* Far inserire 10 numeri all’utente, ogni volta se viene inserito un numero negativo,
 viene fatto reinserire fino a che non viene inserito un numero positivo,
 alla fine dire quanti negativi sono stati inseriti e scrivere la somma solo dei numeri positivi inseriti. */

#include<stdio.h>

int main(){
    
    //i numeri che l'utente inserisci
    int numeri;
    //numero di numeri negativi
    int nNegativi=0;
    //variabile per somma
    int somma=0;
    int i;
    
    for(i=0;i<3;i++){
        
        do{
            printf("Inserisci numero");
            scanf("%d", &numeri);
            if(numeri<0){
                printf("reinserisci il numero (devono essere > 0)");
                nNegativi++;
            }
        }while(numeri<0);

        if(numeri>0){
            somma = somma + numeri;
        }
    }

    printf("I numeri negativi inseriti sono: %d\n", nNegativi);
    printf("La somma dei positivi vale: %d\n", somma);
    

    return 0;
}