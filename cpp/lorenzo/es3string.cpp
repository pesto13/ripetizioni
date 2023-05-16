#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char arr[100];
    int i  = 0;

    fgets(arr, 100, stdin);

    for(i = 0; i < strlen(arr);i++){

        if(arr[i] == ' '){

            printf("\n");
        }else{
            printf("%c", arr[i]);
        }
    }




return 0;
}