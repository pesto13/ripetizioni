#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char arr[100];
    int cont[26];
    int  i = 0;
    int flag = 1;

    fgets(arr, 100, stdin);
    arr[strlen(arr) - 1] = '\0';


        for(i = 0;i < 26;i++){
            
            cont[i] = 0;
        }
        for(i = 0;i < strlen(arr);i++){
                
                char c = tolower(arr[i]);
                if(arr[i] >= 'a' && arr[i] <= 'z' )
            cont[c - 97]++;
        }
        for(i = 0; i <  26;i++){

                if(cont[i] == 0){
                    flag = 0;
                }
        }
        if(flag == 0){
            printf("\n non e' onagrmma");
        }else{
            printf("\n e' nagramma");
        }

    return 0;
}