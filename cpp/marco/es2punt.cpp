#include<iostream>
using namespace std;

void inserisci(float *v, int dim);
void stampa(float *v, int dim);

int main(){

    float vett[20];
    int n;

    cout<<"Inserisci n: ";
    cin>>n;

    inserisci(vett, n);
    stampa(vett, n);

    cout<<vett;
    return 0;
}
void inserisci(float *v, int dim){
    int i;
    for(i=0;i<dim;i++){
        cout<<"inserisci: ";
        cin>>v[i];
    }
}
void stampa(float *v, int dim){
    
    int i=0;

    /* for(i=0;i<dim;i++){
        cout<<v[i]<<" "<<&v[i]<<endl;
    } */

    for(i=0;i<dim;i++){
        cout<<*v<<" "<<v<<endl;
        v++;
    }
}