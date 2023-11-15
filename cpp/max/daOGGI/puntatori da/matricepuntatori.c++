#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

const int N=100, M=100;

void creamd(int md[][M], int n, int m);
void stampamd(int md[][M], int n, int m);
void creamu(int md[][M], int n, int m);


using namespace std;

int main()
{
    int n, m;
    cout<<"Scegli quante righe stampare: ";
    cin>>n;
    cout<<"Scegli quante colonne stampare: ";
    cin>>m;
    int md[N][M];
    char s;
    srand(time(NULL));
    cout<<"Scegli quale matrice desideri stampare: ";
    cin>>s;
    switch(s){
        case 'A':cout<<"Matrice Diagonale Principale"<<endl;
        creamd(md, n, m);
        stampamd(md, n, m);
        break;
        case 'B':cout<<"Matrice Unitaria"<<endl;
        creamu(md, n, m);
        stampamd(md, n, m);
    }
}
void creamd(int md[][M], int n, int m){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(i==j){
                md[i][j]=rand()%10+1;
            }else{
                md[i][j]=0;
            }
        }
    }
}
void stampamd(int md[][M], int n, int m){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<md[i][j]<<" ";
        }
        cout<<endl;
    }
}
void creamu(int md[][M], int n, int m){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(i==j){
                md[i][j]=1;
            }else{
                md[i][j]=0;
            }
        }
    }
}

