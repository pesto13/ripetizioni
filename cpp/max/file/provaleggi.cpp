#include <iostream>

using namespace std;
#include<iostream>
#include<fstream>
using namespace std;


int main(){

    
    string line;
    ifstream f2;


    f2.open("numeri.txt");
    while(getline(f2, line)){
        cout<<line<<endl;
    }
    f2.close();

    




    return 0;
}