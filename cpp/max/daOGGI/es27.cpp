/* Es 27. Trovare l’elemento minimo di una matrice 8 per 8 e dire tutte le coordinate delle celle in cui si trova quel valore. 

    se non riesci a trovare riga e colonna,
    trova quantomentomeno e restituisci il valore minimo dell'intera matrice
*/

#include<iostream>
#include<cmath>
using namespace std;

void inserimento(int m[][1000], int c, int r);
void stampa(int m[][1000], int c, int r);
int trova(int m[][1000]int c, int r);
void sc(int m[][1000], int min, int c, int r);

int main(){

int m[1000][1000], s, c, r;
cout<<"Inserisci colonne: ";
cin>>c;
cout<<"Inserisci righe: ";
cin>>r;

srand(time(NULL));
inserimento(m, c, r);
stampa(m, c, r);
s=trova(m, c, r);
cout<<"Il valore minimo e': "<<s<<endl;
sc(m, c, r, s);

    return 0;
}
void inserimento(int m[][1000], int c, int r){
    int i, j;
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            m[i][j]=rand()%(9-0+1)+0;
        }
    }
}
void stampa(int m[][8]){
    int i, j;
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            cout<<" "<<m[i][j];
        }
        cout<<endl;
    }
}
int trova(int m[][8]){
    int i, j, min;
    min=m[0][0];
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
           if(m[i][j]<min){
            min=m[i][j];
           } 
        }
    }
    return min;
}

void sc(int m[][8], int min){
    int i, j;
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
           if(m[i][j]==min){
            cout<<i<<" "<<j<<endl;
           } 
        }
    }
}