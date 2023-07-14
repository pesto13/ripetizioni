#include<iostream>
#include<cstring>
using namespace std;
void tf(char s[], char old, char newts);
int main()
{
    char s[100];
    char old, newts;
    cout<<"Inserisci carattere da sostituire: ";
    cin>>old;
    cout<<"Inserisci nuovo carattere: ";
    cin>>newts;

    // while(getchar()!='\n');


    cin.getline(s, 100);
    cout<<s;
    tf(s, old, newts);
    cout<<endl<<s;
    return 0;
}

void tf(char s[], char old, char newts){
    int i, dim=strlen(s);
    for(i=0; i<dim; i++){
        if(s[i]==old){
            s[i]=newts;
        }
    }
}