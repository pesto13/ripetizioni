#include<iostream>
using namespace std;

int contaMaiscole(char a, char b, char c){
    int conteggio = 0;
    
    if(a>='A' && a<='Z')
        conteggio++;
    
    if(b>='A' && b<='Z')
        conteggio++;

    if(c>='A' && b<='Z')
        conteggio++;

    return conteggio;
}

int main(){

    char num1, num2, num3;

    cout<<"Inserisci carattere: ";
    cin>>num1;
    cout<<"Inserisci carattere: ";
    cin>>num2;
    cout<<"Inserisci carattere: ";
    cin>>num3;

    int risultato = contaMaiscole(num1,num2,num3);
    cout<<risultato;


    return 0;
}