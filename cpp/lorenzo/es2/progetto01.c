#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#include "progetto01.h"

#define TENTA 7






void choiceWord(char *parola)
{
    printf("\n inserisci parola da indovinare: ");
    fgets(parola, MAX, stdin);
}
void words(char *parola, int *word)
{
    int i;

        *word  = strlen(parola);
        *word = *word - 1;
            for(i = 0; i < *word;i++)
            {
                if(parola[i] == 32)
                {
                    *word = *word - 1;

                }
            }
}
void tentativi(char *parola, int *word,int tent)
{
    int i;
    char let;


     for(i = 0; i < TENTA; i++)
     {




         printf("\n inserire lettera: ");
         scanf("%s", &let);
         if(let == parola[i])
         {
            printf("\n lettera indovinata! ");




         }else{


            printf("\n Hai sbagliato! ");
            tent--;

         }

        printf("\n tentativi: %d", tent);

     }
     printf("\n Tentativi Finiti.");


}
