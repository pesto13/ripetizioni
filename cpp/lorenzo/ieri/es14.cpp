#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 200

int main(){
    
    int n = 0;
    int i = 0,matricola[MAX],anni[MAX],pagaOra[MAX],stipendio = 0,scelta = 0,dim = 0,somma = 0,valore = 0;
    float stipendioMax = 0.0,stipendioMin = 0.0 ,stipendioMedio = 0.0;
    char mansione[MAX],sex[MAX];

    do{
        printf("\n Inserire numero dipendenti: ");
        scanf("%d", &n);
    }while(n < 0 && n > MAX);
    dim = n;
    for(i = 0;i < n; i++){
    
        printf("\n Inserisci matricola: ");
        scanf("%d", &matricola[i]);
        printf("\n Inserisci anni: ");
        scanf("%d", &anni[i]);
        printf("\n Inserisci sesso: ");
        scanf(" %c", &sex[i]);
        printf("\n Inserisci Paga oraria: ");
        scanf("%d", &pagaOra[i]);
        do{
         printf("\n Inserisci mansione: ");
        scanf(" %c", &mansione[i]);
        }while(mansione[i] != 'i' && mansione[i] != 'o' && mansione[i] != 'd');
  

    }
    printf("\nall'inizio %d", dim);
    do{
         do{
        printf("\n Dati operai: ");
        printf("\n fati dipende: ");
     printf("\n stipendio medio: ");
      printf("\n stipednio mas e min: ");
          printf("\n operaio efmmine: ");
          printf("\n Fine");

          printf("\n Inserire scelta : ");
          scanf("%d", &scelta);


         }while( scelta <= 0 || scelta > 6); 

    switch (scelta)
    {
    case 1: 
    do{
        printf("\n Inserire operai: ");
        scanf("%d", &n);
    }while (n < 0 && n > MAX);
  
     for(i = dim;i < n + dim;i++){
        printf("\n i all'internpo del ciclo%d", i);
        mansione[i] = 'o';
        printf("\n Inserisci matricola: ");
        scanf("%d", &matricola[i]);
        printf("\n Inserisci anni: ");
        scanf("%d", &anni[i]);
        printf("\n Inserisci sesso: ");
        scanf(" %c", &sex[i]);
        printf("\n Inserisci Paga oraria: ");
        scanf("%d", &pagaOra[i]);
    }
            dim = dim + n;


        break;

        case 2 :
        printf("\n%d la dim vale:", dim);
        for(i = 0;i < dim; i++){
   
    if(mansione[i] == 'o'){
        printf("\no" );
        printf("\n Inserisci matricola: %d ", matricola[i]);
 
        printf("\n Inserisci anni: %d ", anni[i]);
        printf("\n Inserisci sesso: %c ", sex[i]);
        printf("\n Inserisci Paga oraria: %d ", pagaOra[i]);
        printf("\n Inserisci mansione:  %c", mansione[i]);

    }
        }
     for(i = 0;i < dim; i++){
   
    if(mansione[i] == 'i'){
        printf("\ni" );
        printf("\n Inserisci matricola: %d ", matricola[i]);
 
        printf("\n Inserisci anni: %d ", anni[i]);
        printf("\n Inserisci sesso: %c ", sex[i]);
        printf("\n Inserisci Paga oraria: %d ", pagaOra[i]);
        printf("\n Inserisci mansione:  %c", mansione[i]);

    }
     }
    
     for(i = 0;i < dim; i++){
   
    if(mansione[i] == 'd'){
        printf("\nd" );
        printf("\n Inserisci matricola: %d ", matricola[i]);
 
        printf("\n Inserisci anni: %d ", anni[i]);
        printf("\n Inserisci sesso: %c ", sex[i]);
        printf("\n Inserisci Paga oraria: %d ", pagaOra[i]);
        printf("\n Inserisci mansione:  %c", mansione[i]);

    }
    
     }
    
       
    
    break;
    case 3 : 
    for(i = 0; i < n; i++){
            somma = somma + pagaOra[i]; 
          

    }
      stipendioMedio = (float)somma / dim;
                      printf("\n stipendio medio: %d", stipendioMedio);


    
        break;

        case 4 : 
        stipendioMin = pagaOra[0];
        stipendioMax = pagaOra[0];
            for(i = 0;i < dim;i++){
                if(pagaOra[i] > stipendioMax){

                    stipendioMax = pagaOra[i];
                }
                  if(pagaOra[i] < stipendioMin){

                    stipendioMin = pagaOra[i];
                }
                printf("\n stipendio minimo: %d", stipendioMin);
                                printf("\n stipendio massimo: %d", stipendioMax);


                
                


            }
            break;
            case 5 : 
            printf("\n Inserire valore: ");
            scanf("%d", &valore);
                    for(i = 0;i < dim;i++){
                        if(mansione[i] == 'o' && sex[i] =='f' && pagaOra[i] >= valore){
                             printf("\n Inserisci matricola: %d ", matricola[i]);
 
                           printf("\n Inserisci anni: %d ", anni[i]);
                         printf("\n Inserisci sesso: %c ", sex[i]);
                            printf("\n Inserisci Paga oraria: %d ", pagaOra[i]);
                         printf("\n Inserisci mansione:  %c", mansione[i]);

                            

                        }
                    }
                    break;


    }

    }while(scelta != 6);
    return 0;
}
   