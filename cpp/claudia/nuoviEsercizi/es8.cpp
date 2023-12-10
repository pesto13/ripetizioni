#include<iostream>
using namespace std;

bool isVocal(char c){
    if(c == 'a')
        return true;
    if(c == 'e')
        return true;
    if(c == 'i')
        return true;
    if(c == 'o')
        return true;
    if(c == 'u')
        return true;
    
    return false;
}

int howManyVocals(int lunghezza){
    char c;
    int cont = 0;
    for(int i = 0; i < lunghezza; i++){
        cout<<"Inserisci carattere: ";
        cin>>c;
        if(isVocal(c))
            cont++;
    }
    return cont;
}



int main(){

    int lunghezza1, lunghezza2;
    cout<<"Inserisci lughezza: ";
    cin>>lunghezza1;

    cout<<"Inserisci lughezza: ";
    cin>>lunghezza2;

    int vocali1 = howManyVocals(lunghezza1);
    cout<<"le vocali sono: "<<vocali1;

    int vocali2 = howManyVocals(lunghezza2);
    cout<<"le vocali sono: "<<vocali2;

    return 0;
}