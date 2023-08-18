#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
void count (char S[], char V[]);
int main()
{
    char v[]={'a', 'e', 'i', 'o', 'u'};
    char s[50];
    cout<<"inserire parola = ";
    cin>>s;
    count(s, v);
}
void count (char S[], char V[])
{
    int i, j, d=0;
    for(i=0; i<strlen(S); i++)
    {
        for(j=0; j<strlen(S); j++)
        {
            if(S[i]==V[j])
            {
                d++;
            }
        }
    }
cout<<"vocali = "<<d;
}