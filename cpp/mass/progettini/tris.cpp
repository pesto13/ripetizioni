
#include<iostream>
using namespace std;


class Tris{

    public:

        Tris(){
            turno = 0;
            won = false;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    board[i][j] = ' ';
                }
            }
        }


        void printBoard(){
            int n = 3;
            cout<<endl<<endl;
            for(int i=0;i<n;i++){
                cout<<" ";
                for(int j=0;j<n-1;j++){
                    cout<<board[i][j]<<" | ";
                }
                cout<<board[i][n-1];

                cout<<endl;
                cout<<"-";
                for(int z=0;z<n;z++){
                    cout<<"---";
                }
                cout<<"-";
                cout<<endl;
            }

        }

        void run(){
            for(turno = 0; turno < 9; turno++){

                printBoard();
                move();
                // printBoard();
                if(gameOver()){
                    won = true;
                    break;

                }
            }

            if(won){
                cout<<"Ha vinto il giocatore: "<<turno%2 +1;
            }else{
                cout<<"Pareggio";
            }
        }




    private:

        char board[3][3];
        int turno;
        bool won;


        // verificare se posso scrivere il simbolo
        bool isValid(int r, int c){
           
            if(r<0 || r >2)
                return false;

            if(c<0 || c >2)
                return false;
            
            if(board[r][c] != ' ')
                return false;

            return true;
        }


        // verifichiamo se abbiamo vinto
        bool gameOver(){
            
            // controllo riga
            for(int i=0;i<3;i++)
                if( (board[i][0] == board[i][1]) && (board[i][1]  == board[i][2]) && board[i][0] != ' ')
                    return true;
            
            // controllare colonna 
            for(int i=0;i<3;i++)
                if( (board[0][i] == board[1][i]) && (board[1][i]  == board[2][i]) && board[0][i] != ' ')
                    return true;
            
            if( (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])  && board[0][0] != ' ')
                return true;
            
            if((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])  && board[0][2] != ' ')
                return true;

            return false;
        }


        // abbiamo scritto un simbolo valido all'interno della board
        void move(){
            int r, c;
            
            do{
                cout<<"Inserisci la riga";
                std::cin>>r;
                cout<<"Inserisci la colonna";
                std::cin>>c;
            }while(!isValid(r, c));

            // TODO: giocata alternata
            if(turno%2==0)
                board[r][c] = 'X';
            else
                board[r][c] = 'O';

        }


};