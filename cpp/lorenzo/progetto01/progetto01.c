
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "progetto01.h"

#define TENTA 7






void choiceWord(char *parola)
{
    printf("\n inserisci parola da indovinare: ");
    fgets(parola, MAX, stdin);

    printf("\n parola: %d", strlen(parola));
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
int tentativi(char *parola, int *word,int tent)
{
    int i;
    char let;
    int j;
    int flag = 0;
    char str[*word + 1];

        for(i = 0;i < *word;i++)
        {
            str[i] = '*';
        }
        str[*word] = '\0';


     for(i = 0; i < TENTA; i++)
     {



        flag = 0;

         printf("\n inserire lettera: ");
         scanf("%c", &let);
             while(getchar() != '\n');


        for(j = 0; j < strlen(parola);j++)
        {
             if(let == parola[j])
         {
            printf("\n lettera indovinata! ");
            flag = 1;



            str[j] = let;



            }





         }
          if(flag == 0)
                {
                      printf("\n Hai sbagliato! ");
                      tent--;
                }
                  printf("\n tentativi: %d", tent);

                  if(strcmp(str, parola)== 0)
                    {
                            return 1;

                            }
                    printf("\n str : %s, %d", str, strlen(str));
                    printf("\n parola: %s, %d", parola, strlen(parola));

        }

        return 0;


        }




