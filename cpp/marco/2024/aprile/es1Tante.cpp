
#include<iostream>
#include<cmath>
using namespace std;

float funzione(float x){
    return pow(x, 3)-3*x+1;
}

void trova(float a, float b){
    int x;
    cin>>x;
    cout<<a<<" "<<b<<endl;
    if(funzione(a)*funzione(b)>0)
        return;
    
    float m = (a + b) / 2;

    if(abs(funzione(m)) < 0.009){
        cout<<m;
        return;
    }

    trova(a, m);    
    trova(m, b);
}

int main(){

    float a, b;
    // float soluzioni[3];

    cout<<"Inserisci a: ";
    cin>>a;

    cout<<"Inserisci a: ";
    cin>>b;


    if(funzione(a)*funzione(b)>0){
        cout<<"Non ha soluzioni";
        return 0;
    }

    trova(a, b);

    return 0;
}