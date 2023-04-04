#include<stdio.h>


//variabili
//printf scanf
//cicli for do-while while
//if

int main(){

    int val=3;
    int i;
    

    i=0;
    do{
        printf("%d\n", i+1);
        i++;
    }while(i<val);

    i=0;
    while(i<val){
        printf("%d\n", i+1);
        i++;
    }


    /* for(i=0;i<val;i++){

        printf("%d\n", i+1);
        
    } */
    


    


    return 0;
}