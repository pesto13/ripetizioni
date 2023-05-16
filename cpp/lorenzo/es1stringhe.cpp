#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    int contV = 0;
    int  contC = 0;
    int i = 0;

    scanf("%s", arr);
    for(i = 0; i < strlen(arr);i++){

        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            contV++;
        }else{
            contC++;
        }
    }
    printf("\n numero di vocali e' %d", contV);
    printf("\n numero di consonanti e' %d", contC);
        printf("\n %s ", arr);


    return 0;
}
