
#include<iostream>
using namespace std;


class Connect4{

    public:

        Connect4(){
            turno = 0;
            won = false;
            for(int i=0;i<6;i++){
                for(int j=0;j<7;j++){
                    board[i][j] = ' ';
                }
            }
        }

        void printBoard(){
            int n = 6;
            int m = 7;
            cout<<endl<<endl;
            
            for(int i=1;i<=n+1;i++){
                cout<<" "<<i<<"  ";
            }
            cout<<endl;
            cout<<endl;
            for(int i=0;i<n;i++){
                cout<<" ";
                for(int j=0;j<m-1;j++){
                    cout<<board[i][j]<<" | ";
                }
                cout<<board[i][m-1];

                cout<<endl;
                
                for(int z=0;z<m;z++){
                    cout<<"----";
                }
                
                cout<<endl;
            }

        }

        void run(){
            char winner;
            for(turno = 0; turno < 6*7; turno++){
                
                printBoard();
                move();
                
                winner = gameOver();
                if(winner!=' '){
                    won = true;
                    break;
                }
            }

            if(won){
                cout<<"Ha vinto il giocatore: "<<winner;
            }else{
                cout<<"Pareggio";
            }
        }
    private:
        char board[6][7];
        int turno;
        bool won;
        

        bool isValid(int c){
            return board[0][c-1]==' ';
        }

        char gameOver(){
            int cont=1;
            char prev = ' ';

            // orizzontale
            cout<<"orizzontale"<<endl;
            for(int i=0;i<6;i++){
                prev = ' ';
                for(int j=0;j<7;j++){

                    if(prev != ' ' && prev == board[i][j]){
                        cont++;
                    }else{
                        prev = board[i][j];
                        cont = 1;
                    }

                    if(cont == 4)
                        return prev;
                }
            }
            
            // verticale
            cout<<"verticale"<<endl;
            for(int j=0;j<7;j++){
                prev = ' ';
                for(int i=0;i<6;i++){
                    
                    if(prev != ' ' && prev == board[i][j]){
                        cont++;
                    }else{
                        prev = board[i][j];
                        cont = 1;
                    }

                    if(cont == 4)
                        return prev;
                }
            }

            //diagonale principale
            cout<<"diag princ"<<endl;
            for(int i=0;i<=2;i++){

                for(int j=0;j<=3;j++){
                    
                    int cont = 1;

                    if(board[i][j]== ' ')
                        continue;
                    

                    for(int k=1;k<4;k++){
                        if(board[i+k][j+k]==board[i][j]){
                            cout<<cont<<endl;
                            cont++;
                        }
                            
                        else
                            break;
                    }

                    cout<<cont<<endl;
                    if(cont==4)
                        return board[i][j];
                    
                }
            }


            //diagonale secondaria
            cout<<"diag sec"<<endl;
            for(int i=0;i<=2;i++){

                for(int j=3;j<=6;j++){
                    
                    int cont = 1;

                    if(board[i][j]== ' '){
                        continue;
                    }
                    

                    for(int k=1;k<4;k++){
                        if(board[i+k][j-k]==board[i][j])
                            cont++;
                        else
                            break;
                    }

                    if(cont==4)
                        return board[i][j];
                    
                }
            }


            return ' ';
        }


        int getRow(int c){
            
            for(int r = 5;r>=0;r--){
                if(board[r][c]==' ')
                    return r;
            }
        }

        void move(){

            int c, r;

            do{
                cout<<"Inserisci la colonna";
                std::cin>>c;
            }while(!isValid(c));
            
            c--; // per aggiustare in valore informatico

            r = getRow(c);

            if(turno%2==0)
                board[r][c] = 'X';
            else
                board[r][c] = 'O';

        }


};