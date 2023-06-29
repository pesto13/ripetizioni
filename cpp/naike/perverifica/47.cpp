#include<iostream>
using namespace std;



int main(){

    int valore;
    int i=0, a;
    int xi, ximeno1;
    int limite;

    cout<<"Inserisci a";
    cin>>a;

    cout<<"Inserisci limite";
    cin>>limite;


    xi = ximeno1 = a + 1;
    
    while(xi<limite){
        xi = ximeno1 + 1;
        ximeno1 = xi;
        i++;
    }   
   

    cout<<"numero di cicli: "<<i;
    
    return 0;
}