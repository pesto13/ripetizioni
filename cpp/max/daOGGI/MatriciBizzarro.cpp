/* 



Esercizio C++ con Matrici Bizzarro

Scrivi un programma in C++ che esegua le seguenti operazioni:

Chieda all'utente di inserire la dimensione 
n di una matrice quadrata.
Crea una matrice 
n×n
n×n speciale con la seguente caratteristica:
Gli elementi sulla diagonale principale sono la somma degli indici di riga e colonna più 1, ovvero 
a(i,i)=i+j+1.
Gli elementi fuori dalla diagonale principale sono tutti 0.
Stampa la matrice speciale appena creata.
Calcola e stampa il prodotto dei seguenti elementi:
Il prodotto degli elementi sulla diagonale principale.
Assicurati che il programma sia ben strutturato, leggibile e che utilizzi loop appropriati per riempire la matrice e calcolare i prodotti delle diagonali.

 */
#include<iostream>
using namespace std;
void crea(int m[][100], int r, int c);
void stampa(int m[][100], int c, int r);
int main()
{
    int m[100][100], c, r;
    cout<<"Inserisci colonne:  ";
    cin>>r;
    cout<<"Inserisci righe: ";
    cin>>c;
    crea(m, r, c);
    stampa(m, r, c);

}
void crea(int m[][100], int r, int c){
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i==j){
                m[i][j]=i+j+1;
            }else {
                m[i][j]=0;
            }
            
        }
    }
}
void stampa(int m[][100], int r, int c){
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout<<" "<<m[i][j];
        }
        cout<<endl;
    }
}