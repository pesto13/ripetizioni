#ifndef LIBRERIA_H
#define LIBRERIA_H
#include <stdlib.h>
#include <stdio.h>
#define MAX 75  

int menu(int scelta);
void getdim(int *n);
void insertArray(int dim, int *cod, int *prezzo, char *mob);
void insertCode(int *code);
void elimina(int *dim, int codice, int *cod, int *prezzo, char *mob);
void printArray(int codice, int dim, int *cod, int *prezzo, char *mob);
int search(int dim, int codice, int *cod);
void ordinaMob();
void aggiuntaMob(int *dim, int codice, int *cod, int *prezzo, char *mob);
void range();






#endif
