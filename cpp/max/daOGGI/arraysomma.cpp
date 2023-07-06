#include<iostream>
using namespace std;
void inserimento(int dim, int v[] );
int sommatoria(int v[], int dim);
void stampatoria(int dim,  int v[]);
int main()
{
    int v[100], i, somma=0, dim, lasomma;
    cout<<"Inserisci array: ";
    cin>>dim;
    inserimento(dim, v);
    lasomma=sommatoria(v, dim);
    stampatoria(dim, v);
  
    cout<<"Somma: "<<lasomma;
    return 0;
}
void inserimento(int dim, int v[] )
{
       for(int i=0; i<dim; i++){
        cout<<"Inserisci numero: ";
        cin>>v[i];    
    }
}
int sommatoria(int v[], int dim)
{
    int i;
    int somma=0;
    for(i=0; i<dim; i++){
        somma=somma+v[i];
    }
    return somma;
}
void stampatoria(int dim,  int v[])
{
      for(int i=0; i<dim; i++){
        cout<<" "<<v[i];
    }

}

