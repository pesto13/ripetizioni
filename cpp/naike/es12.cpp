
#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    cout<<"Inserisci a: ";
    cin>>a;

    cout<<"Inserisci b: ";
    cin>>b;

    cout<<"Inserisci c: ";
    cin>>c;

    if( (b<a && b>c)){
        cout<<"b e compreso in decrescente";
    }else if( (b>a && b<c)){
        cout<<"b e compreso in crecrescente";
    }else{
        cout<<"non lo sono";
    }


    return 0;
}