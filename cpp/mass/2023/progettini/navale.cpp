#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class navale
{
private:
    char boardMia[10][10];
    char boardSua[10][10];
    int posizioniNaviAvversarie[5][2];
    int turno;
    int naviMie;
    int naviSue;

    ///
    
    bool isPosizioneOk(int pos[], char board[10][10]);
    void preparaMiaBoard();
    void preparaSuaBoard();
    void stampa(char board[10][10]);

    void sparaIo();
    void sparaLui();
    
public:
    navale();
    void generaPosizione(int pos[]); 
    void stampacaso();
    int run();
};


int navale::run(){

    while(true){
        stampacaso();
        sparaIo();
        if(naviSue == 0)
            return 1;
        sparaLui();
        if(naviMie == 0){
            return 2;
        }
    }

}

void navale::sparaLui(){
    int pos[2];

    generaPosizione(pos);

    if(boardMia[pos[0]][pos[1]] == 'X'){
        naviMie--;
        boardMia[pos[0]][pos[1]] = 'T';
    }else{
        boardMia[pos[0]][pos[1]] = 'O';
    }

}

void navale::sparaIo(){
    int pos[2];

    cout<<"Inserisci riga";
    cin>>pos[0];

    cout<<"Inserisci colonna";
    cin>>pos[1];

    int flag = 0;
    for(int i=0;i<5;i++){
        if(pos[0] == posizioniNaviAvversarie[i][0] &&
            pos[1] == posizioniNaviAvversarie[i][1]){
            
                boardSua[pos[0]][pos[1]] = 'X';
                naviSue--;
                flag = 1;
                break;
        }
    }

    if(flag == 0){
        boardSua[pos[0]][pos[1]] = 'O';
    }

}

void navale::stampacaso(){
    stampa(boardSua);
    cout<<endl<<endl<<endl<<endl;
    stampa(boardMia);
}


navale::navale()
{
    turno = 0;
    naviMie = naviSue = 5;
    srand(time(NULL));


    // entrambe le board bianche
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            boardSua[i][j] = ' ';
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            boardMia[i][j] = ' ';
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            posizioniNaviAvversarie[i][j] = 0;
        }
    }

    // riempiamo le board
    preparaMiaBoard();

    preparaSuaBoard();


}


void navale::preparaSuaBoard(){
    int pos[2];
    for(int i=0;i<naviSue;i++){

        do{
            cout<<"eccomi";
            generaPosizione(pos);

        }while(!isPosizioneOk(pos, boardSua));

        boardSua[pos[0]][pos[1]] = 'X';
        
        posizioniNaviAvversarie[i][0] = pos[0];
        posizioniNaviAvversarie[i][1] = pos[1];
    }


    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            boardSua[i][j] = ' ';
        }
    }



}


bool navale::isPosizioneOk(int pos[], char board[10][10]){

    if(pos[0]<0 || pos[0] > 9)
        return false;

    if(pos[1]<0 || pos[1] > 9)
        return false;
    
    if(board[pos[0]][pos[1]] == 'X')
        return false;

    return true;

}


void navale::preparaMiaBoard(){

    int pos[2];
    for(int i=0;i<naviMie;i++){

        do{
            cout<<"Inserisci riga";
            cin>>pos[0];

            cout<<"Inserisci colonna";
            cin>>pos[1];

        }while(!isPosizioneOk(pos, boardMia));

        boardMia[pos[0]][pos[1]] = 'X';
    }
}



void navale::generaPosizione(int pos[]){
    pos[0] = rand()%10; //riga
    pos[1] = rand()%10; //colonna
}


void navale::stampa(char board[10][10]){

    
    cout<<endl;
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<" ";
        for(int j=0;j<10-1;j++){
            cout<<board[i][j]<<" | ";
        }
        cout<<board[i][10-1];

        cout<<endl;
        
        for(int z=0;z<10;z++){
            cout<<"----";
        }
        
        cout<<endl;
    }

}

