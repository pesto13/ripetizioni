#include<iostream>
using namespace std;

bool isNaturale(int n){
    return n>=0;
}

void inserisciStampa(int n){

    int valore;
    int conteggio=0;

    for(int i=0;i<n;i++){
        cout<<"Inserisci valore: ";
        cin>>valore;
        if(isNaturale(valore))
            conteggio++;
    }

    cout<<"Numeri naturali inseriti: "<<conteggio;
    // return conteggio;
}

int main(){

    int num1;

    cout<<"Inserisci valore: ";
    cin>>num1;

    if(isNaturale(num1))
        inserisciStampa(num1);


    return 0;
}