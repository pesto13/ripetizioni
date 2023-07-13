#include<iostream>
using namespace std;
void ins(int v[], int dim);
void sta(int v[], int dim);
int nm(int v[], int dim, int p);


int main(){

    int v[100], p,  dim, contapo;
    cout<<"Inserisci lunghezza array: ";
    cin>>dim;
    cout<<"Inserisci p: ";
    cin>>p;

    ins(v, dim);
    sta(v, dim);
    nm(v, dim, 4);
    contapo=nm(v, dim, p);
    
    
    if(contapo>=2){
        cout<<"Buono";
    }else{
        cout<<"Non buono";
    }


    return 0;
}
void ins(int v[], int dim){
    int i;
    for(i=0; i<dim; i++){
        cout<<"Inserisci numero: "<<endl;
        cin>>v[i];
    }
}
void sta(int v[], int dim){
    int i;
    for(i=0; i<dim; i++){
        cout<<v[i]<<" ";
    }
}
int  nm(int v[], int dim, int p){
    int i, conta=0;
  
     for(i=0; i<dim; i++){
        if(p<v[i]){
            cout<<"Numeri maggiori del numero base: "<<v[i]<<endl;
            conta++;
        }
    }
    return conta;

}

