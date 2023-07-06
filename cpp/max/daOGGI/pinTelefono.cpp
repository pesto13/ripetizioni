

#include<iostream>
using namespace std;
int main()
{
    int pin;

    int cod=0;
    int tentativi=0;

    cout<<"Inserisci pin telefono:";
    cin>>pin;

    while(cod!=pin && tentativi<3){
        
        cout<<"Inserisci codice";
        cin>>cod;

        tentativi++;
        
    }

    if(cod==pin){
        cout<<"hai vinto";
    }else{
        cout<<"hai perso";
    }

}