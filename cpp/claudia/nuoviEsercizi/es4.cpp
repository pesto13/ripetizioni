#include<iostream>
using namespace std;

int differenzaProdottoSomma(int a, int b, int c){
    return (a*b*c) - (a+b+c);
}

int main(){

    int num1, num2, num3;

    cout<<"Inserisci valore: ";
    cin>>num1;
    cout<<"Inserisci valore: ";
    cin>>num2;
    cout<<"Inserisci valore: ";
    cin>>num3;

    int risultato = differenzaProdottoSomma(num1,num2,num3);
    cout<<risultato;


    return 0;
}