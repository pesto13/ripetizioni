#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char arr[100];

    int i = 0;

        scanf("%s", arr);

    for(i = 0; i < strlen(arr);i++){

          arr[i] = toupper(arr[i]);
    }
    printf("\n %s", arr);
    return 0;
}