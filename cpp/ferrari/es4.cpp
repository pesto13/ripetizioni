#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int count (char S[]);
int main()
{
    char s[50];
    int doppie, div;
    cout<<"inserire parola = ";
    cin>>s;
    doppie=count(s);
    cout<<"le doppie sono = "<<doppie<<endl;
    div=strlen(s)-doppie*2;
    cout<<"le lettere diverse sono = "<<div;
}
int count (char S[])
{
    int i, d;
    for(i=0; i<strlen(S); i++)
    {
        if(S[i]==S[i+1])
        {
            d++;
        }
    }
    return d;
}