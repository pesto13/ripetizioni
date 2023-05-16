#include <stdlib.h>
#include <stdio.h>

#define MAX 100

typedef struct 
{
    
    int giorno,mese,anno;
    
}data;

typedef struct 
{
    char code[10],nome[MAX],cognome[MAX],residenza[MAX];
    
    data nascita;

}persona;


persona readPersona();
void readAllPersona(persona p[], int n);
void stampaPersona(persona p);
void stampaAllpersone(persona p[],int n);
void stampaMagg(persona p[], int n);



int main()
{
    persona  p[MAX];
    int n;

    printf("\n Quante persone inserire: ");
    scanf("%d", &n);

    readAllPersona(p, n);

    stampaAllpersone(p,n);

    stampaMagg(p,n);


    return 0;
}

persona readPersona()
{
    persona  p ;

        printf("\n inserire codice fiscale: ");
        scanf("%s", p.code);
        printf("\n inserire nome: ");
        scanf("%s", p.nome);
        printf("\n inserire cognome: ");
        scanf("%s", p.cognome);
        printf("\n inserire resodenza: ");
        scanf("%s", p.residenza);
        printf("\n inserire giorno: ");
        scanf("%d", &p.nascita.giorno);
        printf("\n inserire mese: ");
        scanf("%d", &p.nascita.mese);
        printf("\n inserire anno: ");
        scanf("%d", &p.nascita.anno);

    return p;
}


void readAllPersona(persona p[], int n){
    int i;
    for(i=0;i<n;i++){
        p[i] = readPersona();
    }
}
void stampaAllpersone(persona p[],int n){

    int i;
    for( i = 0; i< n;i++)
    {
         stampaPersona(p[i]);
    }

}
void stampaPersona(persona p)
{
    

      printf("\n  codice fiscale: %s", p.code);
      
        printf("\n  nome: %s",p.nome);

        printf("\n  cognome: %s", p.cognome);
        printf("\n  resodenza: %s", p.residenza);
        printf("\n  giorno: %d",p.nascita.giorno);
        printf("\n  mese: %d",p.nascita.mese);
        printf("\n  anno: %d",p.nascita.anno);
     

        
}
void stampaMagg(persona p[], int n)
{
    int i;
    
        for(i = 0; i < n;i++){
            if(p[i].nascita.anno <= 2005){
                printf("\n Maggiorenne: ");
               stampaPersona(p[i]);
    }
}
}

    