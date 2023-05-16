#include<iostream>
using namespace std;




int main(){

    int N_classi=1;
    int N_sezioni;
    
    int i,j;

    char sezione;
    int nstud;
    float quotasingola;
    float percentualeMancante;
    int meritevoli;
    

    int primaquota=0, secondaquota=0, terzaquota=0, quartaquota=0, quintaquota=0;
    int primastud=0, secondastud=0, terzastud=0, quartastud=0, quintastud=0;


    for(i=0;i<N_classi;i++){

        cout<<"Inserire quante sezioni ci sono";
        cin>>N_sezioni;
        for(j=0;j<N_sezioni;j++){
            
            cout<<"Inserisci sezione: ";
            cin>>sezione;
            cout<<"Inserisci numero di studenti nella (classe-sezione): ";
            cin>>nstud;
            cout<<"Inserisci quota singola: ";
            cin>>quotasingola;
            
            
            if(i==0){
                primastud=primastud+nstud;
                primaquota=primaquota+quotasingola;
            }
            else if(i==1){
                secondastud=secondastud+nstud;
                secondaquota=secondaquota+quotasingola;
            }
            else if(i==2){
                terzastud=terzastud+nstud;
                terzaquota=terzaquota+quotasingola;
            }
            else if(i==3){
                quartastud=quartastud+nstud;
                quartaquota=quartaquota+quotasingola;
            }
            else if(i==4){
                quintastud=quintastud+nstud;
                quintaquota=quintaquota+quotasingola;
            }
            

            ///////// 

            cout<<"Inserisci quanti studenti sono meritevoli: ";
            cin>>meritevoli;

            cout<<i+1<<" - "<<sezione<<" - "<<meritevoli<<endl<<endl;
        }
    }


    cout<<"QUOTA VERSATA\tNUMERO STUDENTI\tORE DISPONIBILI"<<endl;
    cout<<primaquota<<"\t"<<primastud<<"\t"<<(int)((primaquota)/200*0.75)<<endl;
    cout<<secondaquota<<"\t"<<secondastud<<"\t"<<(int)(secondaquota*0.4)/30<<endl;
    cout<<terzaquota<<"\t"<<terzastud<<"\t"<<(int)(terzaquota*0.4)/30<<endl;
    cout<<quartaquota<<"\t"<<quartastud<<"\t"<<(int)(quartaquota*0.4)/30<<endl;
    cout<<quintaquota<<"\t"<<quintastud<<"\t"<<(int)(quintaquota*0.4)/30<<endl;



    return 0;
}