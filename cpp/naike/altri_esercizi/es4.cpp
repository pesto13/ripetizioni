#include<iostream>
using namespace std;



int main(){

    int a, b,c;

    do{
        std::cout<<"Inserisci a: ";
        std::cin>>a;
    }while(a<0);

    do{
        std::cout<<"Inserisci b: ";
        std::cin>>b;
    }while(b<a);

    do{
        std::cout<<"Inserisci c: ";
        std::cin>>c;
    }while(c<b);
    

    if(c<a+b){
        cout<<"è un triangolo valido"<<endl;

        if(a!=b && b!=c && c!=a)
            cout<<"è scaleno";
        
        else if(a==b && b==c)
            cout<<"è isoscele";

        else if(a==b || b==c || c==a)
            cout<<"è isoscele";


    }else{
        cout<<"non un triangolo valido"<<endl;
    }




    return 0;


}