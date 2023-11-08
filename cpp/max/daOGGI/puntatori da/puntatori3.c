#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void caricavf(float va[], int n);
void stampavf(float va[], int n);
void spmv(float va[], int n, int *somma, int *prodotto, float *media);
int main()
{
    float va[20];
    int n, somma=0, prodotto=1;
    float media;
    srand(time(NULL));
    printf("Scegli quanti valori decimali inserire[max20]: ");
    scanf("%d", &n);
    caricavf(va, n);
    stampavf(va, n);
    spmv(va, n, &somma, &prodotto, &media);
    printf("La somma: %d, Il prodotto %d, La media: %f", somma, prodotto, media );
    return 0;
}
void caricavf(float va[], int n){
    int i;
    for(i=0; i<n; i++){
        va[i]=rand()%10+1;
    }
}
void stampavf(float va[], int n){
    int i;
        for(i=0; i<n; i++){
        printf("Valore: %f\n", va[i]);
        printf("Indirizzo: %p\n", &va[i]);
    }
}
void spmv(float va[], int n, int *somma, int *prodotto, float *media){
    int i;
    for(i=0; i<n; i++){
        *somma=*somma+va[i];
        *prodotto=*prodotto*va[i];
    }
    *media=*somma/n;
}