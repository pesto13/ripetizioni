#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main(){
    int arr[MAX];
    int arr2[MAX];
    int somma[MAX];
    int n = 0, i = 0; 

    do{
        printf("\n Inserisci n:");
        scanf("%d", &n);
    }while(n <= 0);

    for(i = 0; i < n; i++){
        printf("\n Inserire numeri: ");
        scanf("%d", &arr[i]);

    }
      for(i = 0; i < n; i++){
        printf("\n Inserire numeri: ");
        scanf("%d", &arr2[i]);

    }

    for(i = 0; i < n;i++){
        somma[i] = arr[i] + arr2[i];
        printf("\n la somma e ': %d", somma[i]);
        
    }

    return 0;
}
