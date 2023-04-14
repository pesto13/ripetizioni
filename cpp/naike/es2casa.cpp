#include<iostream>
#include<cmath>
using namespace std;

int main(){


    float a, b, c;
    float delta;
    float x1, x2;

    cout<<"inserisci a: ";
    cin>>a;

    cout<<"inserisci b: ";
    cin>>b;
    
    cout<<"inserisci c: ";
    cin>>c;

    delta = b*b-4*a*c;

    if(delta > 0){

        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        
        cout<<x1<<" "<<x2;
    }else{
        cout<<"Non posso calcolare";
    }

    
    
    return 0;
}