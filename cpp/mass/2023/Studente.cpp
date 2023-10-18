/*

Esercizio: Gestore di studenti

Creare una classe Studente che ha come attributi:

nome (stringa)
punteggio (intero, che rappresenta il punteggio di un esame)
La classe dovrebbe avere:

Un costruttore che accetta nome e inizializza il punteggio a 0.
Un metodo impostaPunteggio che utilizza un ciclo do...while per chiedere all'utente un punteggio tra 0 e 100. Il punteggio viene impostato solo se è valido.
Un metodo stampaStatus che utilizza if per stampare "Promosso" se il punteggio è almeno 60, altrimenti "Non promosso".
Creare inoltre una funzione main che:

Crea un array (o un vector) di n studenti, dove n è dato dall'utente.
Utilizza un ciclo for per inizializzare ogni studente con un nome dato dall'utente.
Utilizza un altro ciclo for per impostare il punteggio di ogni studente.
Utilizza un ulteriore ciclo for per stampare lo status di ogni studente.

 */

#include <iostream>
#include <vector>
using namespace std;

class Studente
{
private:
    string nome;
    int voto;

public:
    Studente()
    {
        nome = "";
        voto = 0;
    }
    Studente(string n)
    {
        nome = n;
        voto = 0;
    }

    void impostaPunteggio()
    {
        do
        {
            cout << "Inserisci il voto: ";
            cin >> voto;
        } while (voto <= 0 || voto > 100);
    }

    /*  bool impostaPunteggio(int v)
     {
         if (v > 0 && v <= 100)
         {
             voto = v;
             return true;
         }
         return false;
     } */

    void stampaStatus()
    {
        if (voto >= 60)
            cout << "Promosso";
        else
            cout << "Bocciato";
    }
};

int main()
{
    const int MAX = 100;
    int n;
    Studente quartaB[MAX];

    cout << "Inserisci n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string nome;
        cout << "Inserisci nome: ";
        cin >> nome;
        quartaB[i] = Studente(nome);
    }

    for (int i = 0; i < n; i++)
    {
        quartaB[i].impostaPunteggio();
    }

    for (int i = 0; i < n; i++)
    {
        quartaB[i].stampaStatus();
    }
    return 0;
}