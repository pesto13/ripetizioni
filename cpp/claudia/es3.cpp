#include<iostream>

using namespace std;


int main(){

    int a, b, i;
    

    cout<<"Inserisci primo valore: ";
    cin>>a;

    cout<<"Inserisci n: ";
    cin>>b;


    if(a%2!=0){
        a++;
    }

    for(i=a;i<=b;i=i+2){
        cout<<i<<" ";
    }


    return 0;
}