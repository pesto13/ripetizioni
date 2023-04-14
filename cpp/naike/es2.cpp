#include<iostream>

using namespace std;

int main(){

    const int DICIOTTO = 18;
    int eta;

    cout<<"Inserisci eta: ";
    cin>>eta;

    if(eta>=DICIOTTO){
        cout<<"sei maggiorenne";
    }else{
        cout<<"NON sei maggiorenne";
    }



    return 0;
}