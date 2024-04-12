
#include<iostream>
#include<cmath>
using namespace std;

float funzione(float x){
    return pow(x, 3)-3*x+1;
}

int main(){

    float a, b, m;

    cout<<"Inserisci a: ";
    cin>>a;

    cout<<"Inserisci a: ";
    cin>>b;

    m = (a + b) / 2;

    if(funzione(a)*funzione(b)>0){
        cout<<"Non ha soluzioni";
        return 0;
    }

    while(abs(funzione(m)) > 0.009){
        if(funzione(a)*funzione(m) < 0)
            b = m;
        else
            a = m;
        
        m = (a + b) / 2;
    }

    cout<<"Radice: "<<m;
    return 0;
}