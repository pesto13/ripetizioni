#include<iostream>
using namespace std;
#include<cstring>

int main(){

    int counter=0, i;
    char st[100];

    gets(st);

    cout<<"Lunghezza con funzione: "<<strlen(st)<<endl;

    for(i=0;st[i]!='\0';i++){
        counter++;
    }
    cout<<"Lunghezza senza funzione: "<<counter;
    return 0;
}