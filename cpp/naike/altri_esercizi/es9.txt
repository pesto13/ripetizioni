#include<iostream>

using namespace std;



int main(){

    int N;
    int i;

   
    int max;
    int valore;

    cout<<"Inserisci N";
    cin>>N;

    
    for(i=0;i<N;i++){
        
        cout<<"Inserisci altezza: ";
        cin>>valore;

        if(i==0)
            max = valore;

        if(valore>max)
            max = valore;
        
    }
        
    cout<<"valore massimo: "<<max<<endl;
    

    return 0;
}