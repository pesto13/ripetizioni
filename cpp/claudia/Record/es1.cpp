#include<iostream>
using namespace std;


struct persona {
    char nome[10];
    char cognome[10];
    char cf[10];
    int eta;
};

struct stazione{
    char citta[20];
    int binario;
};

struct viaggio {
    stazione partenza;
    stazione arrivo;
    int durata;
    int numP;
    persona passeggeri[100];
};


int main(){

    viaggio v[5];
    
    cin>>v[2].partenza.citta;
    cin>>v[3].partenza.citta;


    return 0;
}