#include<iostream>
using namespace std;
#include<cstring>

int main(){

    int i;
    char st[100], invertita[100];

    gets(st);

    int dim = strlen(st);

    for(i=0;i<dim;i++){
        invertita[dim-1-i] = st[i];
    }

    
    cout<<st<<endl;
    cout<<invertita<<endl;

    
    if(strcmp(st, invertita)==0){
        cout<<"sono palindrome"<<endl;
    }else{
        cout<<"non sono palindrome"<<endl;
    }

    return 0;
}