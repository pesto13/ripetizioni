#include<iostream>
using namespace std;

float f(int x){
    return x+2*x;
}

int main(){

    int integ = 0;

    int a, b, i, n, h ;
    h = (b-a)/n;
    int x = a + h;

    for(i=0; i < n - 1; i++){
        integ = integ + f(x);
        x += h;
    }
    integ += (f(a)+f(b))/2;
    integ = integ * h;

    return 0;
}