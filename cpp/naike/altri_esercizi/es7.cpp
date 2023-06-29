#include<iostream>

using namespace std;



int main(){

    int N;
    int i;

    cout<<"Inserisci N";
    cin>>N;

    if(N%2==1)
        N--;

    for(i=1;i<=10;i++)
        cout<<N+i*2<<" ";
    
    return 0;
}