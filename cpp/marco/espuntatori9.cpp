#include<iostream>
#include<ctime>
using namespace std;

const int N = 10;
const int M = 5;

void caricam(int quote[][M], int n, int m);

void stampam(int quote[][M], int n, int m);

//calcolare max, min, media
void statQ(int quote[][M], int n, int m, int &max, int &min, float &media);

int main(){

    
    srand(time(NULL));
    
    int max, min;
    float media;
    int quote[N][M];

    caricam(quote, N, M);
    
    stampam(quote, N, M);

    statQ(quote, N, M, max, min, media);

    cout<<"valore massimo: "<<max<<endl;
    cout<<"valore minimo: "<<min<<endl;
    cout<<"valore media: "<<media<<endl;

}


void caricam(int quote[][M], int n, int m){
    int i, j;
    int a=-3, b=200;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            quote[i][j] = rand() % (b-a+1) + a;
        }
    }
}

void stampam(int quote[][M], int n, int m){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<quote[i][j]<<"\t";
        }
        cout<<endl;
    }
}

//calcolare max, min, media
void statQ(int quote[][M], int n, int m, int &max, int &min, float &media){
    int i, j;
    int somma = 0;

    max = quote[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){

            if(quote[i][j]>max){
                max = quote[i][j];
            }


        }
    }


    min = quote[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){

            if(quote[i][j]<min){
                min = quote[i][j];
            }


        }
    }



    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            
            somma = somma+quote[i][j];
        
        }
    }

    media = (float) somma / (n*m);

    

}