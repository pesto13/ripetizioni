#include <stdio.h>




#define MAX 100





void stampa(int num[MAX], int n){

    int i = 0;

    for(i = 0;i < n;i++){

            printf("%d ", num[i]);
    }
    printf("\n");
}

int dimensione(){
    int n;
    do{
        printf("\n Inseire dimesione array: ");
        scanf("%d", &n);
    }while(n < 0 || n > MAX);

    return n;
}

void readNumbers(int num[MAX], int n){
    int i = 0;
    for(i = 0;i < n;i++){

            printf("\n Inseire array1: ");
            scanf("%d", &num[i]);
            
    }
}
int menu(int scelta){

    do{
        printf("\n inserimento primo e secondo array");
        printf("\n creazione del terzo array");
        printf("\n inversione elementi del terzo array");
        printf("\n visualizzazione di tutti e tre array");
        printf("\n ordinamento aarray");
        printf("\n massimo e minimo array");
        printf("\n Fine");

        printf("\n inseire scelta: ");
        scanf("%d", &scelta);
    }while(scelta < 1 || scelta > 7);


    return scelta;
}

void creaTerzo(int num1[MAX], int num2[MAX], int num3[2*MAX], int n){
        
        int i = 0;


            for(i = 0;i < 2*n;i++){

                if(i%2==0){
                    num3[i] = num1[i/2];
                }else{
                    num3[i] = num2[i/2];
                }
                     
            }

}
void inversione(int num[MAX],int n){

        int i = 0;
        int temp = 0;

        for(i = 0; i < n / 2;i++){

                temp  = num[n - 1];
                num[n - i -1 ] = num[i];
                num[i] = temp;
        } 
}
void ordineArray(int num1[MAX], int n){

        int min_ind = 0;
        int i = 0;
        
        int j = 0;
        int tmp = 0;
        for(i = 0;i < n - 1;i++){
                min_ind = i;
            
            
            for(j = i+1;j < n ;j++){
                    if(num1[j] < num1[min_ind]){
                        min_ind = j;
                    }
            }
            if(min_ind != i){

                tmp = num1[min_ind];
                num1[min_ind] = num1[i];
                num1[i] = tmp;
                
                

            }
        }
    
}
int massimo(int num1[MAX], int n ){
    int i = 0;
    int max = num1[0];
    for(i = 1;i < n;i++){
        if(num1[i] > max){
            max = num1[i];
        }
    }
    return max;

}

int minimo(int num1[MAX], int n ){
    int i = 0;
    int min = num1[0];
    for(i = 1;i < n;i++){
        if(num1[i] < min){
            min = num1[i];
        }
    }
    return min;
    
}

