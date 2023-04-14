#include<iostream>
using namespace std;

int main(){

    int valore;
    int i;
    int npositivo = 0;
    int nnegativo = 0;
    int nzero = 0;
    for(i=0;i<10;i++){
        cout<<"inserisci valore: ";
        cin>>valore;
        if(valore>0){
            npositivo++;
        }else if(valore < 0){
            nnegativo++;
        }else{
            nzero++;
        }
    }
    return 0;
}