#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


/*Memorizzare in un array bidimensionale 10 x 10
dei numeri casuali compresi tra zero e nove, stamparne il contenuto e dire quanti zeri
sono memorizzati all’interno dell’array*/

int main(){
    const int N = 10, M = 10;
    int matr[N][M];
    int i,j;



    //riempiere la matrice
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            matr[i][j]=rand()%10;
        }
    }
    

    //stampa della matrice
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }

    //cazzata dell'esercizio, contare gli 0

    int add=0;
    int max = 0;
    for(i=0;i<N;i++){
        add = 0;
        for(j=0;j<M;j++){
            add = add + matr[i][j];
        }
        if(add>max){
            max = add;
        }
    }

    cout<<max;

    return 0;
}