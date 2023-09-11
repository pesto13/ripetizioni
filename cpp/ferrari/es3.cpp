#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void inserisci (int M[], int d);
void palindroma (int M[], int d);
int main()
{
    int n;
    int sb[10];
    cout<<"inserire dimensione vettore = ";
    cin>>n;
    inserisci(sb, n);
    palindroma(sb, n);
}
void inserisci (int M[], int d)
{
    int i;
    for(i=0; i<d; i++)
    {
        cin>>M[i];
    }
}
void palindroma (int M[], int d)
    {
    int i;
    int flag=1;
    for(i=0; i<d/2; i++)
    {
        if(M[i]!=M[d-i-1])
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<"non e' palindormo";
    }
    else
        cout<<"E' palindromo";
}