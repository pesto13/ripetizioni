#include<iostream>

using namespace std;


int main(){

    int i, valore, pari=0;
    
    for(i=0;i<10;i++){
        cout<<"inserisci un valore: ";
        cin>>valore;

        if(valore%2==0){
            pari++;
        }

    }

    cout<<(float)pari/10*100;

    return 0;
}