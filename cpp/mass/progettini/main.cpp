#include<iostream>
#include "tris.cpp"
#include "connect4.cpp"

using namespace std;


int main(){
    
    Connect4 c;
    c.run();
    c.printBoard();
    return 0;
}