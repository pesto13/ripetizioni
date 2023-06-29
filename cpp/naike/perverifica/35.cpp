#include<iostream>
using namespace std;



int main(){

    int valore;
    int i;

    int risulato = 1;
    cout<<"Inserisci valore: ";
    cin>>valore;

    for(i=1;i<=valore;i++){
        risulato *= i;
    }

    cout<<risulato;

    return 0;
}