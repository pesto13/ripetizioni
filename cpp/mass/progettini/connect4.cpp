
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
            
            for(int i=1;i<n+1;i++){
                cout<<" "<<i<<"  ";
            }
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

    private:
        char board[6][7];
        int turno;
        bool won;
        

        


        bool isValid(int r, int c){
            
        }

        bool gameOver(){

        }

        void move(){

        }


};