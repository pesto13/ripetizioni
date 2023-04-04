#include <stdio.h>


int main()
{
    int num;
    FILE *fptr;

    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("file.txt","a");


    if(fptr == NULL)
    {
        printf("Error!"); 
        return 1; 
    }

    printf("Enter num: ");
    scanf("%d",&num);

    fprintf(stderr,"\n%d",num);

    fclose(fptr);

    //////////////////////////////////////////////////////////



   return 0;
}