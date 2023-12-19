#include<iostream>
using namespace std;


int main(){

    int N = 30;
    int valore;
    int cont = 0;
    int somma = 0;

    for(int i = 0; i < N; i++){
        cout<<"Inserisci valore: ";
        cin>>valore;
        if(valore > 20 && valore < 80){
            cont++;
            somma = somma + valore;
        }
    }

    cout<<somma<<endl<<cont;

    return 0;
}