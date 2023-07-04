#include<iostream>
#include<cmath>
using namespace std;



int main(){

    float r, lato_quadrato;
    // float area_cerchio;


    cout<<"Inserisci in input il raggio del quadrato: ";
    cin>>lato_quadrato;


    r = sqrt(lato_quadrato/2+lato_quadrato/2);

    cout<<"area del cerchio: "<<r*r*3.14;



    return 0;


}