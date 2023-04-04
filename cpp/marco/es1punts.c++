#include<iostream>
using namespace std;

void funz(int *a, int *b);

int main(){

    int a = 12;
    int b = 34;

    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;
    funz(&a, &b);
    
    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;

    return 0;
}

void funz(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}