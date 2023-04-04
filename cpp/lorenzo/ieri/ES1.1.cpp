#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
    
    int n = 0,scelta =  0,min_ind = 0, j  = 0,temp = 0;
    int i = 0,codice[MAX],prezzo[MAX],quantita[MAX],scortaMinima[MAX],maxIndex = 0,minIndex = 0;


   do{
    printf("Inserire prodfotti: ");
    scanf("%d", &n);
   }while(n <= 0 || n > MAX);
do{


  do{
    printf("\n Dati prodotto");
    printf("\n Stampa prodotti quantiaa");
    printf("\n Aumento prodotto");
    printf("\n Ordine prodotti");
    printf("\n Prodotti prezzo piu alto e basso");
    printf("\n Fine");

    printf("\n Inserirre scelta: ");
    scanf("%d", &scelta);
  }while (scelta <= 0 || scelta > 6);

  switch (scelta)
  {
  case 1:
        for(i = 0;i < n;i++){
        printf("\n Inserire codice: ");
        scanf("%d", &codice[i]);
        printf("\n Inserire prezzo: ");
        scanf("%d", &prezzo[i]);
        printf("\n Inserire quantita: ");
        scanf("%d", &quantita[i]);
        printf("\n Inserire scortaMinima: ");
        scanf("%d", &scortaMinima[i]);
        
 }
    break;
  
  case 2 : 
    for(i = 0;i < n;i++){
         
          if(quantita[i] <= scortaMinima[i]){
            printf("\n Il codice del prodotto e' : %d", codice[i]);
            printf("\n Il prezzo del prodotto e': %d", prezzo[i]);
        } 
    }
       
         break;
    case 3 : 
         for(i = 0;i < n;i++){
         
          if(prezzo[i] < 20){
           prezzo[i] = prezzo[i] + prezzo[i] / 100 * 10;
        } else{
            prezzo[i] = prezzo[i] + prezzo[i] / 100 * 6;
        }
        printf("\n Prezzo attuale: %d", prezzo[i]);
    }
         break;
    case 4: 
        for (i = 0; i < n-1; i++){
        
        min_ind = i;
        for (j = i+1; j < n; j++){
            if (prezzo[j] > prezzo[min_ind]){
                min_ind = j;
            }
        }
  
           if(min_ind != i){
                
                temp = prezzo[i];
                prezzo[i] = prezzo[min_ind];
                prezzo[min_ind] = temp;
                
                temp = quantita[i];
                quantita[i] = quantita[min_ind];
                quantita[min_ind] = temp;

                temp = scortaMinima[i];
                scortaMinima[i] = scortaMinima[min_ind];
                scortaMinima[min_ind] = temp;

                temp = codice[i];
                codice[i] = codice[min_ind];
                codice[min_ind] = temp;
                
           }
        }
           break;
case 5: 
        minIndex = 0;
        min = prezzo[0];
        maxIndex = 0;
        max = prezzo[0];
        for(i = 0; i < n;i++){
         if(prezzo[i] > max){
            max = prezzo[i];
            maxIndex = i;
         }else{
            min = prezzo[i];
            minIndex = i;

         }

        }
    printf("\n quantita : %d", quantita[maxIndex]);
    printf("\n prezzo : %d", prezzo[maxIndex]);

    printf("\n scortaMinima : %d", scortaMinima[maxIndex]);
    printf("\n codice : %d", codice[maxIndex]);
   
     printf("\n quantita : %d", quantita[minIndex]);
    printf("\n prezzo : %d", prezzo[minIndex]);

    printf("\n scortaMinima : %d", scortaMinima[minIndex]);
    printf("\n codice : %d", codice[minIndex]);

/* for(i = 0;i < n;i++){
 printf("\n quantita : %d", quantita[i]);
    printf("\n prezzo : %d", prezzo[i]);

    printf("\n scortaMinima : %d", scortaMinima[i]);
    printf("\n quantita : %d", codice[i]);
 
} */
   
  
  }
}while (scelta != 6);



return 0 ;
  }
