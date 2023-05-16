#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAXC 10
#define MAXR 10

void insertnum(int mat[][MAXC],int *r, int *c);
void stampa(int mat[][MAXC], int r, int c);
void minmax(int mat[][MAXC], int *posmax, int *posmin, int r, int c);
void scambio(int *vetmax, int *vetmin, int c);

int main()
{
    int r,c;
    int mat[MAXR][MAXC];
    int posmax , posmin;

    srand (time(NULL));
    insertnum(mat, &r, &c);
    stampa(mat, r, c);
    minmax(mat, &posmax, &posmin, r, c);
    scambio(mat[posmax],mat[posmin], c);
    stampa(mat, r, c);


    
}
void insertnum(int mat[][MAXC],int *r, int *c){

    int i,j;

    printf("\n inserire n righe : ");
    scanf("%d", r);
    printf("\n inserire n colonne : ");
    scanf("%d", c);

    for(i = 0; i < *r;i++){
        for(j = 0;j < *c;j++){

            mat[i][j] = rand() % 10;
        }
    }
}
void stampa(int mat[][MAXC], int r, int c){

    int i,j;

    for(i = 0; i < r;i++){
        for(j = 0;j < c;j++){

            printf("%d ", mat[i][j]);

        }
        printf("\n");
    }
}
void minmax(int mat[][MAXC], int *posmax, int *posmin, int r, int c){

    int i,j;
    int somma = 0;
     *posmin = 0;
     *posmax = 0;
     int max,min;
    
    for(j = 0; j < c;j++){

        somma = somma + mat[0][j]; 
    }
    max = min = somma;

    for(i = 0; i < r;i++){
        somma = 0;
        for(j = 0;j < c;j++){

                somma = somma  + mat[i][j];
        }
        if(somma > max){
            max = somma;

            *posmax = i;
        }else if(somma < min){
            min = somma;

            *posmin = i;
        }
    }
    printf("\n posmin : %d", posmin);
    printf("\n posmax :  %d", posmax);

}
void scambio(int *vetmax, int *vetmin, int c)
{
    int j;
    int tmp = 0;

    for(j = 0; j < c;j++){

        tmp = vetmax[j];
        vetmax[j] = vetmin[j];
        vetmin[j] = tmp;
    }
    
}