#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

        char arr[100];

        int  i = 0;
        int flag = 1;

        scanf("%s", arr);

        int dim = strlen(arr);
        printf("\n %d", dim);

        for(i = 0;i < dim / 2;i++){

            /*
            tmp = arr[i];
            arr[i] = arr[strlen(arr) - 1 - i];
            arr[strlen(arr) - 1 - i] = tmp;*/

            
            if(arr[i] != arr[dim - 1 - i]){
                flag = 0;
                
            }
            
            
        }
        
        if(flag == 1){
            printf("\n e ' palindormo");
        }else{
            printf("\n non e' palindromom");
        }
        /*printf("\n %s", arr);*/

    return 0;
}