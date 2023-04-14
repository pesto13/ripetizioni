#include<iostream>
using namespace std;
#include<cstring>

int main(){

    char DIM = 100;
    char st[DIM + 1];

    char st2[DIM+1];

    gets(st);


    strcpy(st2, st);

    cout<<st2;


    cin>>st;
    
    
    return 0;
}