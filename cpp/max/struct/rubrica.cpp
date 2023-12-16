#include <iostream>
using namespace std;

struct contatto{
    char nome[30];
    char cognome[30];
    char numeroTelefono[10];
    char email[30];
    int giorno;
    int mese;
    int anno;
};

contatto inserisciContatto() {
    contatto c;
    cout << "Inserisci nome: ";
    cin >> c.nome;
    cout << "Inserisci cognome: ";
    cin >> c.cognome;
    cout << "Inserisci numero di telefono: ";
    cin >> c.numeroTelefono;
    cout << "Inserisci email: ";
    cin >> c.email;
    cout << "Inserisci giorno di nascita: ";
    cin >> c.giorno;
    cout << "Inserisci mese di nascita: ";
    cin >> c.mese;
    cout << "Inserisci anno di nascita: ";
    cin >> c.anno;
    return c;
}

void stampaContatto(const contatto& c) {
    cout << "Nome: " << c.nome << endl;
    cout << "Cognome: " << c.cognome << endl;
    cout << "Numero di telefono: " << c.numeroTelefono << endl;
    cout << "Email: " << c.email << endl;
    cout << "Data di nascita: " << c.giorno << "/" << c.mese << "/" << c.anno << endl;
    cout << "--------------" << endl;
}

void stampaPrimaLettera(contatto rubrica[20], char lettera, int dim){
    for(int i=0;i<dim;i++){
        if(rubrica[i].nome[0] == lettera){
            stampaContatto(rubrica[i]);
            cout<<"--------------"<<endl;
        }
    }
}

void stampaMeseScelto(contatto rubrica[20], int nMese, int dim){
    for(int i=0;i<dim;i++){
        if( rubrica[i].mese == nMese ){
            stampaContatto(rubrica[i]);
            cout<<"--------------"<<endl;
        }
    }
}

int main(){

    contatto rubrica[20];

    for(int i = 0; i<20;i++){
        rubrica[i] = inserisciContatto();
    }

    for(int i = 0; i<20;i++){
        stampaContatto(rubrica[i]);
    }



    return 0;
}