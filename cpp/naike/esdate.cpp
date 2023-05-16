#include<iostream>
using namespace std;


int main(){

    int giorno, mese, anno;

    int giorno2, mese2, anno2;

    do{
        cout<<"inserisci anno: ";
        cin>>anno;
    }while(anno<1900 || anno>2023);

    do{
        cout<<"inserisci mese: ";
        cin>>mese;
    }while(mese<1 || mese>12);

    for(;;){
        cout<<"inserisci giorno: ";
        cin>>giorno;


        if(mese==4 || mese == 6 || mese == 9 || mese == 11){
            if(giorno>=1 && giorno <=30)
                break;
        }else if(mese == 2){
            if( ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)) { // è bisestile
                if(giorno>=1 && giorno <=29)
                    break;
            }else{  //non è bisestile
                if(giorno>=1 && giorno <=28)
                    break;
            }
        }else{ //ci sono tutti i mesi con 31
            if(giorno>=1 && giorno <=31)
                break;
        }

    }



    cout<<giorno<<"/"<<mese<<"/"<<anno<<endl;

    

    giorno2 = giorno + 1;
    mese2 = mese;
    anno2 = anno;

    if( (mese==4 || mese == 6 || mese == 9 || mese == 11 && giorno2==31) ||
        
        (mese==1 || mese == 3 || mese == 5 || mese == 7 || mese==8 || mese == 10 || mese == 12 || giorno2 == 32) ||

        (mese == 2 && ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) && giorno2 == 30) ||

        (mese == 2 && !((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) && giorno2 == 29)
    
    ){
        giorno2 = 1;
        mese2++;
        if(mese2>12){
            mese2 = 1;
            anno2++;
        }
    }

    cout<<giorno2<<"/"<<mese2<<"/"<<anno2<<endl;





    return 0;
}