#include<iostream>
using namespace std;


struct studente{
    char nome[20];
    float media;
};

struct classe {
    int nPersone;
    studente s[50];
    char nomeClasse[20];
};

int contaTotaleStudenti(classe c[], int dim){
    int i;
    int studentiTotale = 0;
    for(i=0; i < dim; i++){
        studentiTotale = studentiTotale + c[i].nPersone;
    }
    return studentiTotale;
}

void stampa(classe c[], int dim){
    int i;
    int studentiTotale = 0;
    for(i=0; i < dim; i++){
        cout<<c[i].nomeClasse;
        for(int j=0; j < c[i].nPersone; j++){
            cout<<c[i].s[j].media;
            cout<<c[i].s[j].nome;
        }
    }
}

int main(){

    int classi = 0;
    classe c[100];

    cout<<contaTotaleStudenti(c, classi);


    return 0;
}