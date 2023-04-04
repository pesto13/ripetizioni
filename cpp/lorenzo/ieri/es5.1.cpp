#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 200

int main(){
    
    int n = 0,scelta =  0,code3 = 0,trovayo = 0,min_ind = 0,j = 0,temp = 0;
    int i = 0,codice[MAX],postivenduti[MAX],postiliberi[MAX],biglietti = 0;


  do{
       do{
    printf("\n Inizializzazione vettori");
    printf("\n vendita buigloietto");
    printf("\n visualizzazione posti liberi");
    printf("\n classifica spettacolui piu visti");
    printf("\n Fine");
    
    printf("\n Inserire scelta: ");
    scanf("%d", &scelta);
   }while(scelta < 0 || scelta > 5);

   switch (scelta)
   {
    case 1: 
        do{
            printf("\n Quanti spettacoli: ");
            scanf("%d", &n);
        }while(n <= 0 || n > MAX);

        for(i = 0;i < n;i++){
            
        postiliberi[i] = MAX;
         postivenduti[i] = 0; 
                                  
                /* printf("\n Inserire codice: ");
            scanf("%d", &codice[i]); */
            codice[i] = i;
        }

            
        break;
   
    case 2 : 
        printf("\n codice da cercare: ");
    scanf("%d", &code3);
    i = 0;
     while (i < n && code3 != codice[i]){
            i++;
        }
    if(i == n){
        printf("\n Elemento non trovato");
        trovayo = -1;
    }else{
        
        trovayo = i;
    }
    if(trovayo != -1){
        printf("\n Quanti biglietti vendere: ");
        scanf("%d", &biglietti);
     postivenduti[i] = postivenduti[i] + biglietti;
    postiliberi[i] = postiliberi[i] - biglietti;
    printf("\n Posti venduti %d", postivenduti[i]);
      printf("\n Posti liberi %d", postiliberi[i]);
    }
    
    break;

    case 3 : 
       printf("\n codice da cercare: ");
    scanf("%d", &code3);
    i = 0;
     while (i < n && code3 != codice[i]){
            i++;
        }
    if(i == n){
        printf("\n Elemento non trovato");
        trovayo = -1;
    }else{

        
       
        trovayo = i;
    }
    if(trovayo != -1){
        printf("\n Posti liberi %d", postiliberi[trovayo]);
    }
    case  4 : 
        for (i = 0; i < n-1; i++){
        
        min_ind = i;
        for (j = i+1; j < n; j++){
            if (postivenduti[j] > postivenduti[min_ind]){
                min_ind = j;
            }
        }
  
           if(min_ind != i){
                
                temp = postivenduti[i];
                postivenduti[i] = postivenduti[min_ind];
                postivenduti[min_ind] = temp;
                
                temp = codice[i];
                codice[i] = codice[min_ind];
                codice[min_ind] = temp;

                temp = postiliberi[i];
                postiliberi[i] = postiliberi[min_ind];
                postiliberi[min_ind] = temp;
                

             
           }
        }
        for(i = 0; i < n-1;i++){
           
              printf("\n Posti venduti: %d", postivenduti[i]);
              printf("\n Posti liberi: %d", postiliberi[i]);
              printf("\n codice: %d", codice[i]);
      
        }w
       
break;

   }

  }while (scelta != 5);

  

   return 0;
}