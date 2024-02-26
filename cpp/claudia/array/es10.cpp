#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
    const int MAX = 5;
    int somma = 0;
    float media;
    float mediaValori;

    int numeri[MAX];

    int valore1;
    int valore2;
    int valore3;
    int valore4;
    int valore5;

    cout<<"Inserisci valore ";
    cin>>valore1;
    cout<<"Inserisci valore ";
    cin>>valore2;
    cout<<"Inserisci valore ";
    cin>>valore3;
    cout<<"Inserisci valore ";
    cin>>valore4;
    cout<<"Inserisci valore ";
    cin>>valore5;

    for(int i = 0; i < MAX; i++){
        cout<<"Inserisci valore: ";
        cin>>numeri[i];
    }

    mediaValori = (valore1 + valore2 + valore3 + valore4 + valore5) / 5;  

    for(int i = 0; i < MAX; i++){
        somma = somma + numeri[i];
    }
    
    media = (float)somma / MAX;

    // deve essere pronta la media

    cout<<"media: " << media;
    cout<<"mediaValori: " << mediaValori;
        
    return 0;
}
