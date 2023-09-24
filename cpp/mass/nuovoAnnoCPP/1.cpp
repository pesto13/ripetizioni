/* Una matrice è a diagonale nulla se tutti gli elemnti della matrice hanno valore 0.
Creare un programmino C++ che prende in input una matrice e stampa "la matrice è a diagonale nulla" 
se è una matrice a diagonale nulla. 
Il programma deve  accettare dall'utente solo matrici quadrate.
 */

#include<iostream>
using namespace std;

void inserisciMatrice(int matrice[][100], int dim);
bool isDiagonaleNulla(int matrice[][100], int dim);
void stampa(int matrice[][100], int dim);

int main(){

    const int MAX=100;
    int matrice[MAX][MAX];

    int dim;

    cout<<"Inserisci dim";
    cin>>dim;
    
    inserisciMatrice(matrice, dim);

    bool esito = isDiagonaleNulla(matrice, dim);

    stampa(matrice, dim);

    if(esito){
        cout<<"la matrice è a diagonale nulla";
    }else{
        cout<<"la matrice NON è a diagonale nulla";
    }


    return 0;
}

void inserisciMatrice(int matrice[][100], int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<"Inserisci valore cella";
            cin>>matrice[i][j];
        }
    }
}

bool isDiagonaleNulla(int matrice[][100], int dim){
    for(int i=0;i<dim;i++){
        if(matrice[i][i]!=0){
            return false;
        }
    }
    return true;
}

void stampa(int matrice[][100], int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<matrice[i][j]<<" ";
        }
        cout<<endl;
    }
}