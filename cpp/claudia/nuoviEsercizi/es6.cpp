#include<iostream>
using namespace std;

bool is3Divisori(int n){
    int cont = 0;
    for(int i = 1;i<=n;i++){
        if(n%i == 0)
            cont++;
    }

    if(cont>=3)
        return true;
    return false;
}

bool funzione(int a, int b){
    bool esito1 = is3Divisori(a);
    bool esito2 = is3Divisori((b*b)-1);

    return esito1 && esito2;    
}

int main(){

    int num1, num2;
    cout<<"Inserisci valore: ";
    cin>>num1;

    cout<<"Inserisci valore: ";
    cin>>num2;

    bool esito = funzione(num1, num2);

    if(esito)
        cout<<"entrambe hanno divisori";
    else
        cout<<"non hanno divisori";

    return 0;
}