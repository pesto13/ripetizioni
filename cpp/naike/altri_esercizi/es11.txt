#include<iostream>

using namespace std;



int main(){

   
    int valore;
    int risultato=0;

    cout<<"Inserisci valore da calcolare: ";
    cin>>valore;


    for(int i=0;i<valore;i++){
        
        risultato+=i*2+1;
    }

    cout<<risultato;

    return 0;
}