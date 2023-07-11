#include<iostream>
#include "tris.cpp"
#include "connect4.cpp"
#include "navale.cpp"

using namespace std;


int main(){

    navale n;
    int winner;
    winner = n.run();

    n.stampacaso();

    if(winner == 1){
        cout<<"hai vinto";
    }else{
        cout<<"hai perso";
    }


    return 0;
}