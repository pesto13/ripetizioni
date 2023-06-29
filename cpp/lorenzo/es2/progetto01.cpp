#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#include "progetto01.h"




int main()
{

    char parola[MAX];
    int word;
    int i;
    int tent = 7;


    choiceWord(parola);
    words(parola, &word);


    printf("\n lettere da indovinare: %d \n ",  word );
    for(i = 0; i < word; i++)
    {
        printf("_");
    }
    printf("\n");
    tentativi(parola, &word,tent);


    return 0;
}