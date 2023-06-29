#include<iostream>

using namespace std;



int main(){

   
    int sufficienti=0;
    int voto;

    int i=0;

    
    for(i=0;;i++){
        
        cout<<"Inserisci voto: ";
        cin>>voto;
        
        if(voto==0){
            break;
        }

        if(voto>=18)
            sufficienti++;
        
    }
        
    cout<<"percentuale di suffcienti: "<<float(sufficienti)/i*100<<endl;
    

    return 0;
}