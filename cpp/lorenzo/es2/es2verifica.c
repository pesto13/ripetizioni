#include <stdlib.h>
#include <stdio.h>
#include "libreria.h"



int main(){

    int cod[MAX], prezzo[MAX];
    char mob[MAX];
    int dim = 0;
    int codice = 0;
    int scelta;

    menu(scelta);
do{


    switch (scelta)
    {
    case 1:
        getdim(&dim);
        insertArray(dim, cod, prezzo, mob);


        break;
    case 2: 
        insertCode(&codice);
        elimina(&dim, codice, cod, prezzo, mob);

        break;
    case 3: 
        insertCode(&codice);
        printArray(codice, dim,  cod,  prezzo,  mob);

        break;
    case 4: 
        insertCode(&codice);

        aggiuntaMob(&dim,  codice, cod, prezzo, mob);

        break;
    case 5:
        break;
    case 6 :
        printf("\n fine");




    }
    
       
    }while(scelta != 6);

    return 0;

    }