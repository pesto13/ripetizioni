#include<iostream>
#include<ctime>
using namespace std;


void caricaV(int temp[], int dim);

void stampaV(int temp[], int dim);

//calcolare max, min, media
void statT(int temp[], int dim, int &max, int &min, float &media);

int main(){


    srand(time(NULL));
    int MAX = 50;
    int temperature[MAX];
    int max, min;
    float media;
    caricaV(temperature, MAX);

    stampaV(temperature, MAX);

    statT(temperature, MAX, max, min, media);

    cout<<"valore massimo: "<<max<<endl;
    cout<<"valore minimo: "<<min<<endl;
    cout<<"valore media: "<<media<<endl;
    return 0;

}



void caricaV(int temp[], int dim){
    int i;
    int a = -5, b = 30;
    for(i=0;i<dim;i++){
        temp[i] = rand() % (b-a+1) + a;
    }
}

void stampaV(int temp[], int dim){
    int i;
    for(i=0;i<dim;i++){
        cout<<temp[i]<<" ";
    }
}

void statT(int temp[], int dim, int &max, int &min, float &media){

    int i;
    int somma = 0;
    max = temp[0];
    for( i = 0;i<dim;i++){
        if(temp[i]>max){
            max = temp[i];
        }
    }

    min = temp[0];
    for( i = 0;i<dim;i++){
        if(temp[i]<min){
            min = temp[i];
        }
    }


    for( i = 0;i<dim;i++){
        somma = somma + temp[i];
    }

    media = (float)somma / dim;




}