#include<iostream>
using namespace std;

struct libro{
    int codice;
    char titolo[20];
    char autore[20];
    int ggmmaa;
};

void inserimento(libro l);
void stampa(libro l);
void cc(libro l);


int main()
{
    libro l[20];
    int i;
    for(i=0;i<20;i++){
        l[i]=inserimento();
    }
    

    for(i=0; i<20;i++){
        stampa(l[i]);
    }
    int cdc;
    cout<<"Inserisci cdc: ";
    cin>>cdc;
    for(i=0;i<20;i++){
        cc(l[i], cdc);
    }

    return 0;
}

libro inserimento(){
    libro l;
    cout<<"Inserisci titolo: ";
    cin.getline(l.titolo, 20);
    cout<<"Inserisci nome autore: ";
    cin.getline(l.autore, 20);
    cout<<"Inserisci codice: ";
    cin>>l.codice;
    cout<<"Inserisci data di pubblicazione: ";
    cin>>l.ggmmaa;
    return l;
}
void stampa(libro l){
    cout<<"Il codice e': "<<l.codice;
    cout<<"Il titolo e': "<<l.titolo;
    cout<<"L'autore e': "<<l.autore;
    cout<<"Data di pubblicazione: "<<l.ggmmaa;
}

void cc(libro l, int cdc){
    if(cdc==l.codice){
        stampa(l);
    }
}
