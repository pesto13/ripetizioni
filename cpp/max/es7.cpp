#include<iostream>
using namespace std;


int main(){

    char scelta;
    int km;
    int errore = 0;
    float prezzoPieno, prezzoScontato;

    cout<<"Inserisci quanti km";
    cin>>km;
    cout<<"Inserisci categoria di persona: ";
    cin>>scelta;
    

    if(km<10){
        errore = 1;
    }
    else if(km <= 100){
        prezzoPieno = 5;
    }
    else if(km <= 300){
        prezzoPieno = 10;
    }
    else{
        prezzoPieno = 15;
    }

    switch (scelta)
    {
        case 'P':
            prezzoScontato = prezzoPieno * 0.9; //sarebbe il 100% - il 10%
        break;

        case 'S':
            prezzoScontato = prezzoPieno * 0.85;
        break;

        case 'M':
            prezzoScontato = prezzoPieno * 0.75;
        break;
    default:
        errore = 1;
        break;
    }

    if(errore == 0){ //è tutto ok
        cout<<"PrezzoPieno: "<<prezzoPieno<<endl;
        cout<<"PrezzoScontato: "<<prezzoScontato<<endl;
    }else{
        cout<<"Errore...";
    }
    return 0;
}