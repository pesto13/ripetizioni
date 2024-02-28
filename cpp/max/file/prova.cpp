#include <iostream>

using namespace std;
#include<iostream>
#include<fstream>
using namespace std;


int main(){

    int numero_iniziale;
    ofstream f1;
    cout<<"Inserisci un valore ";
    cin>>numero_iniziale;

    f1.open("numeri.txt");
    for(int i=0;i<10;i++){
        f1<<i+numero_iniziale<<endl;
    }
    f1.close();
    







    return 0;
}