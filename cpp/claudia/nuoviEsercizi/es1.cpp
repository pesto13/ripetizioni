#include<iostream>
using namespace std;

int secondiTotali(int a, int b, int c){
    return a*3600+b*60+c;
}

int main(){
    int num1, num2, num3;
    cout<<"Inserisci carattere: ";
    cin>>num1;
    cout<<"Inserisci carattere: ";
    cin>>num2;
    cout<<"Inserisci carattere: ";
    cin>>num3;

    int risultato1 = secondiTotali(num1,num2,num3);
    
    int num4, num5, num6;
    cout<<"Inserisci carattere: ";
    cin>>num4;
    cout<<"Inserisci carattere: ";
    cin>>num5;
    cout<<"Inserisci carattere: ";
    cin>>num6;

    int risultato2 = secondiTotali(num4,num5,num6);

    if(risultato1>risultato2)
        cout<<"Il primo orario e' maggiore";
    else if (risultato1<risultato2)
        cout<<"Il secondo orario e' maggiore";
    else
        cout<<"orari uguali";
    

    return 0;
}