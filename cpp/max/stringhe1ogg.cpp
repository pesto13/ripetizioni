#include<iostream>
using namespace std;
#include<cstring>

int main(){

    char DIM = 100;
    char st[DIM + 1];
    int i;
    char c;

    int contatore[5];
    char vocals[] = {'a', 'e', 'i', 'o', 'u', '\0'};

    for(i=0;i<5;i++){
        contatore[i]=0;
    }

    cout<<"inserisci stringa: ";
    gets(st);

    
    // controllare le vocali

    for(i=0;i<strlen(st);i++){
        
        c = tolower(st[i]);
        
        for(int j=0;j<strlen(vocals);j++){
            if(c==vocals[j]){
                contatore[j]++;
            }
        }
    } 


    // stampare risultato

    for(i=0;i<5;i++){
       cout<<vocals[i]<<": "<<contatore[i]<<endl;
    }
    
    
    return 0;
}