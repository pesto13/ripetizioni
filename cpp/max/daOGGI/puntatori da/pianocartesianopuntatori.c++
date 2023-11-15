#include<iostream>
#include<cstdlib>
#include<cmath>

int puntomedio(float ax, float ay, float bx, float by, float *cx, float *cy);

using namespace std;

int main()
{
    float ax, ay, bx, by, cx, cy;
    cout<<"Inserisci ax: ";
    cin>>ax;
    cout<<"Inserisci ay: ";
    cin>>ay;
    cout<<"Inserisci bx: ";
    cin>>bx; 
    cout<<"Inserisci by: ";
    cin>>by;
    int a=puntomedio(ax, ay, bx, by, &cx, &cy);
    
    cout<<"Il valore di cx: "<<cx<<endl;
    cout<<"Il valore di cy: "<<cy<<endl;
    return 0;
}
int puntomedio(float ax, float ay, float bx, float by, float *cx, float *cy){
    *cx=(ax+bx)/2;
    *cy=(ay+by)/2;
    return 77;
}