#include<iostream>
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>
#include <algorithm>
#include <conio.h>
using namespace std;


const int righe = 2, colonne = 2;
struct card{

    int valore;
    bool girata;
    int giocatore;

};

class Memory
{
private:
    
    card matrix[righe][colonne];
    int carteScoperte;

    void stampa();
    bool scopriCarta(int x, int y);
    void copriCarta(int x, int y);
    bool sonoUguali(card c1, card c2);
    void coppiaVincente(int player, card c1, card c2);
    int winner();

public:
    Memory();
    void run();
};

int Memory::winner(){
    int c1, c2;
    c1 = c2 = 0;


    for(int i=0;i<righe;i++){
        for(int j=0;j<colonne;j++){
            if(matrix[i][j].giocatore==1)
                c1++;
            else if(matrix[i][j].giocatore==2){
                c2++;
            }
        }
    }

    if(c1==c2)
        return 0;
    
    if(c1>c2)
        return 1;
    
    if(c2>c1)
        return 2;

    return -1;
}

void Memory::run(){

    int x1, y1, x2, y2;
    int cont = 0;
    int caso;
    while(true){

        stampa();
        do{
            cout<<"inserisci x1: ";
            cin>>x1;
            cout<<"inserisci y1: ";
            cin>>y1;
        }while(!scopriCarta(x1, y1));
        stampa();
        do{
            cout<<"inserisci x2: ";
            cin>>x2;
            cout<<"inserisci y2: ";
            cin>>y2;
        }while(!scopriCarta(x2, y2));
        stampa();

        // abbiamo effettivamente 2 carte che non erano girate e ora lo sono

        if(sonoUguali(matrix[x1-1][y1-1], matrix[x2-1][y2-1])){
            coppiaVincente((cont%2)+1,matrix[x1-1][y1-1], matrix[x2-1][y2-1]);
            cont--;
        }
        else{
            copriCarta(x1, y1);
            copriCarta(x2, y2);
        }


        cin>>caso;

        system("cls");
        


        if(carteScoperte==righe*colonne)
            break;
        
        cont++;
    }

    cout<<"ha vinto il giocatore: "<<winner();

}

void Memory::coppiaVincente(int player, card c1, card c2){
    c1.giocatore = c2.giocatore = player;
    carteScoperte+=2;
}

bool Memory::sonoUguali(card c1, card c2){
    return c1.valore == c2.valore;
}

void Memory::copriCarta(int x, int y){
    x--;
    y--;

    matrix[x][y].girata = false;
}

bool Memory::scopriCarta(int x, int y){
    /*
    I valori inseriti di x e y sono umani, quindi dobbiamo sottrarre 1 ad entrambe
    */
    x = x-1;
    y = y-1;

    if(x<0 || x>=righe)
        return false;
    
    if(y<0 || y>=colonne)
        return false;

    if(matrix[x][y].girata)
        return false;

    matrix[x][y].girata = true;

    return true;
}

void Memory::stampa(){
    for(int i=0;i<righe;i++){
        for(int j =0;j<colonne;j++){
            if(matrix[i][j].girata)
                cout<<matrix[i][j].valore<<" ";
            else
                cout<<"# ";
        }
        cout<<"\n";
    }

    cout<<"\n\n\n\n";
}

Memory::Memory()
{
   
    carteScoperte = 0;

    for(int i=0;i<righe;i++){
        for(int j =0;j<colonne;j++){
            matrix[i][j].girata = false;
            matrix[i][j].giocatore = 0;
        }
    }

    int valMax = righe*colonne/2;

    std::vector<int> support;

    for(int val=1;val<=valMax;val++){
        support.push_back(val);
        support.push_back(val);
    }

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle (support.begin(), support.end(), std::default_random_engine(seed));

    int cont=0;
    for(int i=0;i<righe;i++){
        for(int j =0;j<colonne;j++){

            matrix[i][j].valore = support[cont];
            cont++;
        }
    }
}
