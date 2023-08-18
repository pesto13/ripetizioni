#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
void count (char S[]);
int main()
{
    char s[50];
    cout<<"inserire parola = ";
    cin>>s;
    count(s);
}
void count (char S[])
{
    int i, d;
    for(i=0; i<strlen(S); i++)
    {
        if(S[i]==S[i+1])
        {
            d++;
        }
    }
    cout<<"doppie = "<<d;
}
