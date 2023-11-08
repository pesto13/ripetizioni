#include<stdio.h>
void caricavf(float va[], int n);
void stampavf(float va[], int n);
int main()
{
    float va[20];
    int n;
    printf("Scegli quanti valori decimali inserire[max20]: ");
    scanf("%d", &n);
    caricavf(va, n);
    stampavf(va, n);
    return 0;
}
void caricavf(float va[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Inserisci valore: ");
        scanf("%f", &va[i]);
    }
}
void stampavf(float va[], int n){
    int i;
        for(i=0; i<n; i++){
        printf("Valore: %f\n", va[i]);
    }
}