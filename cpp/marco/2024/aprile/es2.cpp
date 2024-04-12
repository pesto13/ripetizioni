#include<iostream>
#include<fstream>
using namespace std;

double funzione(double x){
    return x*x;
}

double derivata(double x, double h){
    return (funzione(x+h)-funzione(x))/h;
}

double eqdiff(double x, double y){
    return 2*x;
}

int main(){
    double x, xf;
    int n;
    double y;

    cout<<"Inserisci a: ";
    cin>>x;

    cout<<"Inserisci b: ";
    cin>>xf;

    cout<<"Inserisci n: ";
    cin>>n;

    double h = (xf-x)/n;
    
    ofstream outputFile("output.txt");

    for(int i=0;i<n;i++){
        outputFile<<x<<"\t"<<funzione(x)<<"\t"<<derivata(x, h)<<"\t"<<funzione(x+h)<<endl;
        y = y + h * eqdiff(x, y);
        x = x + h;
    }
    outputFile<<y;
    outputFile.close();
    return 0;
}