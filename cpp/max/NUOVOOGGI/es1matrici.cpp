#include <iostream>
#include <ctime>
using namespace std;
void inserimento(int m[][100], int r, int c);
void stampa(int m[][100], int r, int c);
void eye(int m[][100], int copia[][100], int r, int c);
void occhio(int m[][100], int copia[][100], int r, int c);
void tril(int m[][100], int copia[][100], int r, int c);

int main()
{
    int m[100][100], r, c, copia[100][100];
    srand(time(NULL));
    cout << "Inserisci numero di righe e colonne: ";
    cin >> r;

    inserimento(m, r, r);
    stampa(m, r, r);
    cout << endl;

    tril(m, copia, r, r);
    stampa(copia, r, r);
}
void inserimento(int m[][100], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m[i][j] = rand() % (19 - 10 + 1);
        }
    }
}
void stampa(int m[][100], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        cout << endl;
        for (j = 0; j < c; j++)
        {
            cout << m[i][j];
            cout << " ";
        }
    }
}
void eye(int m[][100], int copia[][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i != j)
            {
                copia[i][j] = 0;
            }
            else
            {
                copia[i][j] = m[i][j];
            }
        }
    }
}
void occhio(int m[][100], int copia[][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i != c - j - 1)
            {
                copia[i][j] = 0;
            }
            else
            {
                copia[i][j] = m[i][j];
            }
        }
    }
}
void tril(int m[][100], int copia[][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i < j)
            {
                copia[i][j] = 0;
            }
            else
            {
                copia[i][j] = m[i][j];
            }
        }
    }
}
