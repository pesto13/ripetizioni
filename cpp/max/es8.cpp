#include<iostream>
using namespace std;

int calcoloFattoriale(int n);

int main(){

    int n, i, fattoriale=1;
    

    /* for(i=2;i<=n;i++){
        fattoriale = fattoriale * i;
    } */

    fattoriale = calcoloFattoriale(n);
    

    cout<<fattoriale;
   
    return 0;
}

int calcoloFattoriale(int n){

    int i, fattoriale;
    
    for(i=2;i<=n;i++){
        fattoriale = fattoriale * i;
    }

    return fattoriale;
}