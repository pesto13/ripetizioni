
#include<iostream>
#include <fstream>
#include <string>
using namespace std;


string decipher(string cipherText){
    string plainText;
    plainText = cipherText;
    int a;
    for(char& c : plainText){
        if (isalpha(c)) {
            c -= 2;
            if (c < 'A')
                c += 26;
        }
    }
    return plainText;
}


int main(){

    ifstream ifile;
    ofstream ofile;
    string cipherText;
    string plainText;

    ifile.open ("cipher.txt");
    
    string line;
    while(getline(ifile, line)){
        cipherText += line + '\n';
    }
    ifile.close();
    
    plainText = decipher(cipherText);
    ofile.open ("plain.txt");
    ofile << plainText;
    ifile.close();

    return 0;
}