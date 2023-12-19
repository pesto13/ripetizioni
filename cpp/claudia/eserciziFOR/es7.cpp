#include<iostream>
using namespace std;


int main(){

    int N = 30;
    int valore;
    int max = 0, cont = 0;

    for(int i=0;i<N;i++){
        cout<<"Inserisci valore";
        cin>>valore;

        if(valore > max){
            max = valore;
            cont = 1;

        }else if(valore == max){
            cont++;
        }
    }

    return 0;
}