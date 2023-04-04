#include<iostream>
using namespace std;

void tabellina(int n);

int main(){

    int n;
    cout<<"inserisci n";
    cin>>n;

    tabellina(n);

    return 0;

}

void tabellina(int n){

    int i;

    for(i=1;i<=10;i++){
        cout<<endl<<n*i;
    }
    
}