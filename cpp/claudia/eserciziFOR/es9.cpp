#include<iostream>
using namespace std;


int main(){

    int N = 25;
    int max1 = 0, max2 = 0, max3 = 0;
    int valore;

    for(int i=0; i < N; i++){
        cout<<"Inserisci valore ";
        cin>>valore;

        if(valore>max1){
            max3 = max2;
            max2 = max1;
            max1 = valore;
        }else if(valore>max2){
            max3 = max2;
            max2 = valore;
        }else if(valore>max3){
            max3 = valore;
        }

    }

    cout<<max1<<endl;
    cout<<max2<<endl;
    cout<<max3<<endl;

    return 0;
}