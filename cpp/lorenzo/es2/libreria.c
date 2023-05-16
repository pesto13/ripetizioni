#include <stdlib.h>
#include <stdio.h>      
#include "libreria.h"

int menu(int scelta){

    do{
        printf("\n 1. caricamento ar ");
        printf("\n 1. caricamento ar ");
        printf("\n 1. caricamento ar ");
        printf("\n 1. caricamento ar ");
        printf("\n 1. caricamento ar ");
        printf("\n 6. fine ");

        printf("\n inserire scelta: ");
        scanf("%d", &scelta);

    }while(scelta <= 0 || scelta > 6);

    return scelta;
}
void getdim(int *n){

    do{

    
    printf("\n Inserire dimensione: ");
    scanf("%d", n);
    }while(*n < 0 || *n > MAX);
    
  
}
void insertArray(int dim, int *cod, int *prezzo, char *mob)
{
    int i = 0;

        for(i = 0; i < dim;i++){

            printf("\n inserire codide del mobile: ");
            scanf("%d", &cod[i]);
            printf("\n insire prezzo del mobile : ");
            scanf("%d", &prezzo[i]);
            do{
            printf("\n inserire tipo di mobile: ");
            scanf("%c", &mob[i]);
            }while(mob[i] != 'a' && mob[i] != 'b' && mob[i] != 's');

        }



}
void insertCode(int *code){

    printf("\n inserire codice: ");
    scanf("%d", code);


}
void elimina(int *dim, int codice, int *cod, int *prezzo, char *mob){

    int i = 0;


        i = search( *dim,  codice,  cod);

        if(i != -1){
                for(;i < *dim - 1;i++){
                cod[i] = cod[i + 1];
                prezzo[i] = prezzo[i + 1];
                mob[i] = mob[i + 1];

            }
            (*dim)--;
        
        }else{
            printf("\n non esiste");
        }

            


}
void printArray(int codice, int dim, int *cod, int *prezzo, char *mob){

   int i = 0;


        i = search( dim,  codice,  cod);

        if(i != -1){
        
        printf("\n codice : %d", cod[i]);
        printf("\n prezzo : %d", prezzo[i]);
        printf("\n mobile : %c", mob[i]);
    
}else{
    printf("\n non esiste");

}
}
int search(int dim, int codice, int *cod){
     
     int i = 0;
     
        while(i < dim && codice != cod[i]){
            
            i++;
        }
        if(i < dim){

            return i;

        }else{
                return -1; 
      }

}
void aggiuntaMob(int *dim, int codice, int *cod, int *prezzo, char *mob){

         int i = 0;


        i = search( *dim, codice,  cod);

        if(i == -1 && *dim < MAX){

            printf("\n inserire codice: ");
            scanf("%d", &cod[*dim]);
            
            printf("\n inserire prezzo: ");
            scanf("%f", &prezzo[*dim]);
            
            printf("\n inserire mobile: ");
            scanf("%c", &mob[*dim]);
            
            (*dim)++;
        }

}

