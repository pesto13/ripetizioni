#include<iostream>
using namespace std;
int main()
{
    int a, b, i, flag=0;
    cout<<"Inserisci a: ";
    cin>>a;
    cout<<"Inserisci b: ";
    cin>>b;
    if(a<b){
        for(i=a; i<=b; i++){
            cout<<i<<endl;
        }
    }else{
        
        for(i=2; i<=b && flag!=1; i++){
            if(a%i==0 &&  b%i==0){
                flag = 1;
                i--;
            }
        }
        
        
        if(flag==0){
            cout<<"il minimo è 1";
        }else{
            cout<<"i è minimo comunue divisore "<<i<<endl;
        }
        
    }
    
}