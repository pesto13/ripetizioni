/*
Leggere una stringa e contare quanto caratteri diversi tra loro contiene.

 */
#include <stdio.h>

int main()
{
    char stringa[100];
    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int caratteriDiversi = 0;
    int caratteri[256] = {0}; // Assumendo che lavoriamo con caratteri ASCII

    for (int i = 0; stringa[i] != '\0'; i++)
    {
        if (caratteri[(int)stringa[i]] == 0)
        {
            caratteri[(int)stringa[i]] = 1;
            caratteriDiversi++;
        }
    }

    printf("La stringa contiene %d caratteri diversi.\n", caratteriDiversi);

    return 0;
}