#include <stdio.h>
#include <stdlib.h>

int potenza(int base, int esp);

int somma(int x, int n);

int fibo(int n);

int primo(int n);

int main(){

int valore1 = 0, valore2 = 0;
int scelta = 0;
int num = 0;

do{
    do{
        printf("\n somma");
        printf("\n fibonacci");
        printf("\n intero positivo");
        printf("\n fine");

        printf("\n Inseire scelta: ");
        scanf("%d", &scelta);
    }while(scelta < 0 || scelta > 4);

        switch(scelta){
            case 1 :
                printf("\n Inserire primo valore: ");
                scanf("%d", &valore1);
                printf("\n Inserire secondo valore: ");
                scanf("%d", &valore2);

            printf("\n la somma e': %d", somma(valore1, valore2));
        
        break;
        case 2 :
            printf("\n Inserisci numero dequens: ");
            scanf("%d", &num);

            printf("\n fibonacci : %d", fibo(num)); 

    break;
    case 3:
        printf("\n inseirrsci valore: ");
        scanf("%d", &num);

        printf("\n pnuemro primo : %d", primo(num));
        }

}while(scelta != 4);
return 0;
}
int potenza(int base, int esp){
int i = 0;
int ris = 1;

        for(i = 0;i < esp;i++){

            ris = ris * base;
        }
        return ris;
}
int somma(int x, int n){

    int sommaV = 0;
    int i = 0;

    for(i = 0; i < x;i++){

    sommaV = sommaV +  potenza(i + 1,n);

    }

    return sommaV; 

}
int fibo(int n){

    int menouno = 1;
    int menodue = 0;
    int ris = 0;
    int i = 0;

    if(n == 1){

        return 0;
    }else if (n == 2){

        return 1;
    }

        for(i = 2;i < n;i++){
            
            ris = menouno + menodue;
            menodue = menouno;
            menouno = ris;

        }
        return ris;


}

int isPrime(int valore){
    int i=2;
    int cont = 0;
    for(i=2;i<valore;i++){
        if(valore%i==0){
            cont++;
        }
    }
    if(cont == 0){
        return 1;
    }
    return 0;
}

int primo(int n){

    int ris = 0;
    int i = 0;
    int cont = 0;
    for(i=2;cont < n;i++){
        
        if(isPrime(i)){
            printf("Il valore %d e primo", i);
            cont++;
        }

    }
    i--;


    return i;

}
int numT(int n){

        int somma = 0;
        int i = 0;
        for(i = 1; i <= n ;i++){

            somma = somma + i;
        }   
        return somma;     
}
