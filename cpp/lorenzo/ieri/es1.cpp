#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(){
    srand(time(NULL));
    int arr[MAX];
    int n = 0, i = 0,max = 0, iMax = 0,min = 500,iMin = 0,somma = 0;
    float media = 0.0;
    do{
        printf("\n Inserisci n: ");
        scanf("%d", &n);
    }while(n <= 0);
    for(i = 0; i < n;i++){
        arr[i] = rand() % 501;
    }
    for(i = 0; i < n;i++){

        printf("\n Valore : %d", arr[i]);        

    }
    for(i = 0; i < n;i++){
        if(arr[i] > max){
            max = arr[i];
            iMax = i;
                }
    }

     for(i = 0; i < n;i++){
        if(arr[i] < min){
            min = arr[i];
            iMin = i;
                }
    }
    for(i = 0;i < n; i++){

        somma = somma + arr[i];
       
    }
     media = (float)somma / n; 
     printf("\n La media e' %f:", media);
     printf("\n Il numero minore e' %d: ", iMin);
     printf("\n Il numero maggiore e' %d: ", iMax);
        


            


}