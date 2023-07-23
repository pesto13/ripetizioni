#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cstring>
using namespace std;


/* 
Ecco un esercizio in C++ che coinvolge un array di interi e una stringa in modo più sfidante:

"Scrivi un programma in C++ che richieda all'utente di inserire una stringa di testo.
Successivamente, il programma dovrà calcolare la somma di tutti i valori ASCII dei caratteri presenti nella stringa
e memorizzarla in una variabile intera chiamata 'somma'.
Successivamente, richiedi all'utente di inserire un numero intero N.
Il programma dovrà quindi generare un array di N interi casuali compresi tra 1 e somma.
Infine, stampa sulla console la stringa di testo e l'array di interi generato."

*/

/* 

1-inserie le varie variabili
2-dividere tutto in funzioni
3-funzione che mi permette di inserire caratteri
4-funzione che converte i caratteri
5-funzione che somma caratteri
6-funzione per la generazione
7-funzione per la stampa deib numeri casuali

 */

//void parola(char s[], int dim);
int convertire(char s[], int dim);
void casuale(int m[], int n, int somma);
void stampa(int m[], int n);
int main(){
    srand(time(NULL));

    int n, somma;
    char s[100];
    int m[100];
    cout<<"Inserisci parola: ";
    cin>>s;
    
    //parola(s, dim);
    somma=convertire(s, strlen(s));

    cout<<"Inserisci quanti valori casuali stampare: ";
    cin>>n;
    casuale(m, n, somma);
    stampa(m, n);
}
/* void parola(char s[], int dim){
    int i;
    for(i=0; i<dim; i++){
       cout<<"Inserisci lettera: ";
       cin>>s[i];
    }
    s[i]='\0';
    cout<<s<<endl;
} */
int convertire(char s[], int dim){
    int i, somma=0; 
    for(i=0; i<dim; i++){
        cout<<"Il valore asci di: "<<s[i]<<" e': "<<int(s[i])<<endl;
        somma=somma+int(s[i]);
    }
    cout<<"Somma: "<<somma<<endl;
    return somma;
}
void casuale(int m[], int n, int somma){
    int i;
    for(i=0; i<n; i++){
        m[i]=rand()%(somma-1+1)+1;
    }
}
void stampa(int m[], int n){
    int i;
    for(i=0; i<n; i++){
        cout<<" "<<m[i];
    }
}