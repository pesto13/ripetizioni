#include<iostream>
using namespace std;


int main(){

    int N, valore;
    float somma = 0, media;
    float maggiore = 0, minore = 0;

    cout<<"Inserisci quanti numeri: ";
    cin>>N;

    cout<<"Inserisci valore";
    cin>>valore;
    maggiore = valore;
    minore = valore;

    for(int i = 0; i < N - 1; i++){
        cout<<"Inserisci valore";
        cin>>valore;

        if(valore > maggiore){
            maggiore = valore;
        }else if(valore < minore){
            minore = valore;
        }

        somma = somma + valore;
    }

    media = somma/N;
    cout<<maggiore<<endl;
    cout<<minore;

    return 0;
}