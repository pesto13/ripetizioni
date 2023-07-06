#include<iostream>
using namespace std;
int main()
{
    int v[100], dim, i;
    cout<<"Inserisci array: ";
    cin>>dim;
    for(i=0; i<dim; i++){
        cout<<"Inserisci valpori: ";
        cin>>v[i];
    }
    for(i=0; i<dim; i++){
        cout<<" "<<v[dim-1-i];
    }
}