#include<iostream>

using namespace std;



int main(){

    string nome;

    int somma_voto=0;
    int voto;
    int max, min;

    int i=0;
    int N;

    cout<<"Inserisci N";
    cin>>N;
    
    for(i=0;i<N;i++){
        
        somma_voto = 0;

        cout<<"Inserisci nome atleta: ";
        cin>>nome;

        for(int j=0;j<5;j++){
            
            cout<<"Inserisci voto: ";
            cin>>voto;

            somma_voto+=voto;
            
            if(j==0){
                max = min = voto;
            }
            

            if(voto>max)
                max = voto;
            else if(voto<min)
                min = voto;

        }

        somma_voto = somma_voto - max - min;

        cout<<"atleta: "<<nome<<" punteggio: "<<float(somma_voto)/3<<endl;
        
    }
        
    

    return 0;
}