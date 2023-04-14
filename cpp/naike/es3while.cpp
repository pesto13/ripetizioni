
#include<iostream>
using namespace std;

int main(){

    int numero;
    int somma = 0;

    do{

        cout<<"Inserisci valore numero: ";
        cin>>numero;

        somma = somma + numero;
        
    }while(numero!=0);

    

    cout<<somma;

    return 0;
}