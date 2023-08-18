#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
void compare (char first[], char second[]);
int main()
{
    char first[50];
    char second[50];
    cout<<"inserire parola = ";
    cin>>first;
    cout<<"inserire seconda parola (della stessa lunghezza della prima ) = ";
    cin>>second;
    compare(first, second);
}
void compare (char first[], char second[])
{
    int i, j;
    for(i=0; i<strlen(first); i++)
    {
        for(j=0; j<strlen(first); j++)
        {
            if(first[i]==second[j])
            {
                cout<<" "<<first[i];
            }
        }
    }
}
