#include<iostream>

using namespace std;



int main(){

    int N;
    int i;

    int somma_altezze=0;
    int basse=0;
    int alte=0;

    int altezza;

    cout<<"Inserisci N";
    cin>>N;

    
    for(i=0;i<N;i++){
        
        cout<<"Inserisci altezza: ";
        cin>>altezza;

        if(altezza>180)
            alte++;
        else if(altezza<165)
            basse++;
        
        somma_altezze+=altezza;
    }
        
    cout<<"altezza media: "<<somma_altezze/N<<endl;
    cout<<"numero di bassi: "<<basse<<endl;
    cout<<"numero di alti: "<<alte<<endl;

    return 0;
}