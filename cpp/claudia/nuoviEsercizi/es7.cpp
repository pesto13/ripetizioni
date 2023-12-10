#include<iostream>
using namespace std;

int nDivisori(int n){
    int cont = 0;
    for(int i = 1;i<=n;i++){
        if(n%i == 0)
            cont++;
    }

    return cont;
}



int main(){

    int n, d, z;
    cout<<"Inserisci valore: ";
    cin>>n;

    d = nDivisori(n);
    cout<<d;

    z = nDivisori(d);
    cout<<n;

    return 0;
}