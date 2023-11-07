
#include <iostream>
#include <map>

using namespace std;

void caricaDizinario(map<string, string>& dizionario){

    string strita, strstran;

    cout<<"Inserisci valore italiano: ";
    cin>>strita;

    cout<<strita;
    cout<<"Inserisci valore straniero: ";
    cin>>strstran;
    dizionario[strita] = strstran;
}


string trova(map<string, string>& dizionario){
    string cercaIta;
    cout<<"quale parola vuoi tradurre";
    cin>>cercaIta;
    
    return dizionario[cercaIta];
}


using namespace std;
int main()
{
    map<string, string> dizionario;


    caricaDizinario(dizionario);

    cout<<endl;
    cout<<trova(dizionario);

    return 0;
}