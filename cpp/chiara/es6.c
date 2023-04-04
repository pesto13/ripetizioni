#include<stdio.h>



int main(){

    int a, b, c;

    printf("Inserisci numero: ");
    scanf("%d", &a);

    printf("Inserisci numero: ");
    scanf("%d", &b);

    printf("Inserisci numero: ");
    scanf("%d", &c);
    
    if(b-a==c-b){
        printf("sono in successione");
    }else{
        printf("non sono in successione");
    }
    
    


    return 0;
}