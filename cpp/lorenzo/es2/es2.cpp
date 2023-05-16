#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

void selectionSort(char str[]);
void getPosChar(char * str, char c, int *pos);


int main()
{
    char str[MAX];
    char  c;
    int pos;

    scanf("%c", &c);

    scanf("%s", str);
    selectionSort(str);
    printf("\n str: %s", str);
    getPosChar(str, c, &pos);
    printf("\n posizone %d", pos);
    

}
void swap(char * a,char * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    
        
    
}
 void selectionSort(char str[])
{
    int i, j, min_idx;
    int  n = strlen(str);
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (str[j] < str[min_idx])
              min_idx = j;
        }
        
        if (min_idx!=i)
            swap(&str[min_idx], &str[i]);
    }
}
void getPosChar(char * str, char c, int *pos)
{
    int i = 0;
    int n =  strlen(str);

   while(i < n && c >= str[i]){

        
        i++;
   }
   * pos = i;

            
    }


