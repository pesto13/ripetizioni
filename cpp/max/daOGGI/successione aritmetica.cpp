#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    int n1, n2;
    cout<<"Inserisci a: ";
    cin>>a;
    cout<<"Inserisci b: ";
    cin>>b;
    cout<<"Inserisci c: ";
    cin>>c;
    n1=b-a;
    n2=c-b;

    if(n1==n2){
        cout<<"Successione Aritmetica";
    }else{
        cout<<"Non Lo e";
    }
    return 0;
}