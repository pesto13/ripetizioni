#include<iostream>

using namespace std;



int main(){

    int N;
    int i;

    cout<<"Inserisci N";
    cin>>N;

    if(N%2==1)
        N--;

    for(i=0;i<N;i=i+2)
        cout<<N-i<<" ";
    
    return 0;
}