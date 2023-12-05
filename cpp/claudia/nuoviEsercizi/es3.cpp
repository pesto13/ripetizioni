#include<iostream>
using namespace std;

int diffMaxMin(int a, int b, int c){
    int massimo;
    int minimo;

    if(a>b){
        if(a>c)
            massimo = a;
        else
            massimo = c;
    }else{
        if(b>c)
            massimo = b;
        else
            massimo = c;
    }


    if(a<b){
        if(a<c)
            minimo = a;
        else
            minimo = c;
    }else{
        if(b<c)
            minimo = b;
        else
            minimo = c;
    }


    return massimo-minimo;
}

int main(){

    int num1, num2, num3;

    cout<<"Inserisci valore: ";
    cin>>num1;
    cout<<"Inserisci valore: ";
    cin>>num2;
    cout<<"Inserisci valore: ";
    cin>>num3;

    int risultato = diffMaxMin(num1,num2,num3);
    cout<<risultato;


    return 0;
}