/* Es 24. Scrivi un programma che verifica se in una matrice 7 per 7 ci sono prevalentemente zeri.

    risponde vero se >80% è 0
    falso altrimenti


    se non ti ricordi come si fa la percentuale: (cerca su google)    

    se > 30 vero
    falso altrimenti
*/  
#include<iostream>
#include<ctime>
using namespace std;
void nm(int m[][100], int dimr, int dimc);
void st(int m[][100], int dimr, int dimc);
int tr(int m[][100], int dimr, int dimc, int cerca);
void p(int m[][100], int dimr , int dimc);


int main()
{
    int m[100][100], dimr, dimc, conta;
    cout<<"Inserisci numero righe ";
    cin>>dimr;
    cout<<"Inserisci numero colonne: ";
    cin>>dimc;


    srand(time(NULL));
    nm(m, dimr, dimc);
    st(m, dimr, dimc);
    p(m, dimr, dimc);
    
    
    return 0;

}
void nm(int m[][100], int dimr, int dimc){
    int i, j;

    for(i=0; i<dimr; i++){
        for(j=0; j<dimc; j++){
            m[i][j]=rand()%(9-0+1)+0;
        }
    }
}
void st(int m[][100], int dimr, int dimc){
    int i, j;
     for(i=0; i<dimr; i++){
        for(j=0; j<dimc; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
int tr(int m[][100], int dimr, int dimc, int cerca){
    int conta=0;
    int i, j;
    for(i=0; i<dimr; i++){
        for(j=0; j<dimc; j++){
            if(m[i][j]==cerca){
            conta++;
        }
    }
    
    }
    return conta;
}
void p(int m[][100], int dimr , int dimc){
    int per, conta;
    per=dimr*dimc*80/100;
    conta=tr(m, dimr, dimc, 0);
    if(conta>=per){
        cout<<"VERO";
    }else{
        cout<<"FALSO";
    }
}