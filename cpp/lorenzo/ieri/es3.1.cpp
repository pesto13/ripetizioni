#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
    
    int n = 0,scelta =  0,num = 0,trovayo = 0;
    int i = 0,nome[MAX],codice[MAX],numeroKWHlettprece[MAX],numeroKWHlettauutale[MAX],bolleta = 0,minIndex = 0;


   do{
    printf("Inserire prodfotti: ");
    scanf("%d", &n);
   }while(n <= 0 || n > MAX);
do{


  do{
    printf("\n Dati prodotto");
    printf("\n Stampa prodotti quantiaa");
    printf("\n cancellazione ");
    printf("\n Ordine prodotti");
    printf("\n Prodotti prezzo piu alto e basso");
    printf("\n Fine");

    printf("\n Inserirre scelta: ");
    scanf("%d", &scelta);
  }while (scelta <= 0 || scelta > 6);

  switch (scelta){
case 3: 
    printf("\n Numeor da eliminare: ");
    scanf("%d", &num);
    i = 0;
     while (i < n && num != codice[i]){
            i++;
        }
        for( i ;i < n - 1;i++ ){
             codice[i] = codice[i + 1 ];
        }
        n--;
    case 4 : 
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
    
     printf("\n quantita : %d", quantita[trovayo]);
    printf("\n prezzo : %d", prezzo[trovayo]);

    printf("\n scortaMinima : %d", scortaMinima[trovayo]);
    printf("\n codice : %d", codice[trovayo]);
  }