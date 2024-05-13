

#include<iostream>
using namespace std;

int main(){

    const int R = 100;
    const int C = 100;
    int mata[R][C];
    int matb[R][C];
    int matprod[R][C];



    // le leggi in input tutte
    
    int r1, r2, c1, c2;

    if(c1 == r2){

        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>mata[i][j];
            }
        }

        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>matb[i][j];
            }
        }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int somma = 0;
                // c1 oppure r2 (che sono uguali)
                for(int k=0;k<c1;k++){
                    somma = somma + mata[i][k] * matb[k][j];
                }
                matprod[i][j] = somma;
            }
        }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                std::cout<<matprod[i][j]<<"\t";
            }
            std::cout<<endl;
        }



    }else{
        cout<<"Non puoi";
    }

    
    
    

    return 0;
}