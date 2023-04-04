#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 13

int main(){
    int arr[MAX];
    int  i = 0,somma = 0; 

 
    for(i = 0;i < MAX - 1;i++){
        printf("\n Inserire numeri: ");
        scanf("%d", &arr[i]);
      
    }
    for(i = 0; i < MAX - 1;i++){
          
        if(i % 2 == 1){
           somma = somma + arr[i] * 3;;
        }
        else{
            somma = somma + arr[i];
        }
        
    }
    
            arr[MAX - 1] = somma  % 10;
            for(i = 0; i < MAX; i++){
                printf("\n array finale: %d", arr[i]);
            }
    return 0;
}
     
