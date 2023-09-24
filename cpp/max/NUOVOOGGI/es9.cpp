/*
Leggi una stringa e verifica che non ci siano caratteri ripetuti in essa

 */

#include <iostream>
#include <cstring>
using namespace std;

int inserimento(char f[], int dim);
int ricerca(char f[], int dim);

int main()
{
    char f[100];
    cout << "Inserisci Frase: ";
    cin >> f;
    cout << f << endl;
    int conta = ricerca(f, strlen(f));

    if (conta == 0)
    {
        cout << "Non ci sono caratteri uguali";
    }
    else
    {
        cout << "Ci sono caratteri ripetuti";
    }
}

int ricerca(char f[], int dim)
{
    int i, j, conta = 0;
    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)
        {
            if (i != j)
            {

                if (f[i] == f[j])
                {
                    conta++;
                }
            }
        }
    }
    return conta;
}