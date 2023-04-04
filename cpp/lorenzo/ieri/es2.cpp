#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){

        float arr[MAX];
        int n = 0, i = 0;
        float numS = 0.0;

     do{
        printf("\n Inserisci n: ");
        scanf("%d", &n);
    }while(n <= 0);
    for(i = 0;i < n;i++){
        printf("\n Inserire numero: ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n;i++){
        printf("\n Numero %d: ", arr[i]);
        numS = arr[i] - (arr[i] * 30 / 100);
        arr[i] = numS;
        printf("\n Numero ridotto: %d", arr[i]);   
    }
        
}

