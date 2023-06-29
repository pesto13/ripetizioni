#include<iostream>
using namespace std;



int main(){

    int valore;
    int i, N;

    int numeriNegativi, numeriPositivi, numeriPari = 0, numeriDispari = 0;

    numeriDispari = numeriPari = numeriNegativi = numeriPositivi = 0;


    cout<<"Inserisci N: ";
    cin>>N;

    for(i=0;i<N;i++){

        cout<<"Inserisci valore: ";
        cin>>valore;

        if(valore<0){
            numeriNegativi++;
            cout<<"!";
        }else{
            numeriPositivi++;
        }
        
        
        if(valore%2==0){
            numeriPari++;
        }else if(valore%2==1){
            numeriDispari++;
        }
    }

    cout<<"valori negativi"<<numeriNegativi/N*100<<endl;
    
    return 0;
}