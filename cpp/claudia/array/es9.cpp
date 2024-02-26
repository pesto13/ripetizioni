#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
    const int MAX = 20;
    srand(time(NULL));
    int numeri[MAX];
    int valore;
    int cont = 0;
    for(int i = 0; i < MAX; i++){
        numeri[i] = rand() % 10 + 1;
    }

    cout<<"Che numeri vuoi vedere se e' presente: ";
    cin>>valore;

    for(int i = 0; i < MAX; i++){
        if(valore == numeri[i]){
            cont++;
        }
    }

    if(cont > 0)
        cout<<"e' presente ";
    else
        cout<<"non e' presente ";
        
    return 0;
}
