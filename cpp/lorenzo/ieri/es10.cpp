#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>

#define MAX 10

int main(){
    int arr[MAX];
    int n = 0, i = 0; 

    do{
        printf("\n Inserisci n:");
        scanf("%d", &n);
    }while(n <= 0);

        
    /* for(i = 0;i < n;i++){
        if(i % 2 == 0){
            arr[i] = i *  3;
        }else{
            arr[i] = -i * 3; 
        } 
    } */

    for(i=0;i<n;i++){
        arr[i] = pow((-1), i) * i * 3;
    }

    for(i = 0;i < n; i++){
     printf("\n nUMERO  %d:", arr[i]);

    }
       
    return 0;
}
