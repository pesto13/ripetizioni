#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){

    char arr[MAX];
    int esito = 0,i = 0, n=0;
    char c;
    

    do{
        printf("\n Inserisci n: ");
        scanf("%d", &n);
    }while(n <= 0);
    
    //ti rimuove il '\n' che rimane nel buffer
    getchar();

    for(i = 0;i < n;i++){
        printf("\n Inserire carattere: ");
        
        //esistono 2 soluzione almeno per questo. Questa è un
        //po più carina, ed è fondamentale lo spazio bianco
        scanf(" %c", &arr[i]);
        
    }
    
        
    printf("\n Inserisci carattere da cercare: ");
    scanf(" %c", &c);


    for(i = 0;i<n;i++){
        if(arr[i] == c){
            esito = 1;
        }
    }

    if(n+1<=MAX && esito==0){
        arr[n] = c;
        n++;
    }
    
    for (int i = 0; i<n; i++) {
      printf("%c", arr[i]);
   }
}
