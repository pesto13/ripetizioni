#include<stdio.h>


//variabili
//printf scanf
//cicli for do-while while
//if

int main(){

    int primoNumero;
    int secondoNumero;

    printf("Inserisci numero: ");
    scanf("%d", &primoNumero);


    printf("Inserisci numero: ");
    scanf("%d", &secondoNumero);
    

    if((primoNumero%secondoNumero)==0){
        printf("Si è multiplo");
    }else{
        printf("No, non è multiplo");
    }
    
    
    
    


    return 0;
}