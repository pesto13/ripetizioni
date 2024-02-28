#include <iostream>

using namespace std;
#include<iostream>
#include<fstream>
using namespace std;


int main(){

    char testo[100] = "Galeotto fu 'l libro e chi lo scrisse: quel giorno piu' non vi leggemmo avante";
    string leggifile;
    ofstream f1;
    ifstream f2;

    f1.open("poesia.txt");
    f1<<testo;
    f1.close();

    f2.open("poesia.txt");
    getline(f2, leggifile);
    f2.close();

    cout<<leggifile;




    return 0;
}