#include<iostream>
using namespace std;


struct casa{
    int metriQuadri;
    char classeEnergetica;
    float costo;
};


casa leggeCasa(){
    casa c;

    cout<<"Inserisci metri quadri";
    cin>>c.metriQuadri;
    cout<<"Inserisci classe energetica";
    cin>>c.classeEnergetica;
    cout<<"Inserisci costo";
    cin>>c.costo;

    return c;
}


int cercaMinoreMetriQuadri(casa c[], int dim){
    
    int i;
    int posizioneMinimo = 0;
    int min=c[0].metriQuadri;
    for(i=0;i<dim;i++){
        if(c[i].metriQuadri < min){
            min = c[i].metriQuadri;
            posizioneMinimo = i;
        }
    }

    return posizioneMinimo;

}


int cercaMiglioreClasseEnergetica(casa c[], int dim){
    
    int i;
    int posizioneMinimo = 0;
    char min=c[0].classeEnergetica;
    for(i=0;i<dim;i++){
        if(c[i].classeEnergetica < min){
            min = c[i].classeEnergetica;
            posizioneMinimo = i;
        }
    }

    return posizioneMinimo;
}


void stampaCasa(casa c){

    cout<<"valore in mentri quadri "<<c.metriQuadri<<endl;
    cout<<"valore classe energetica "<<c.classeEnergetica<<endl;
    cout<<"valore del costo "<<c.costo<<endl;
    
}
    

int main(){
    const int MAX = 3;
    casa c[MAX];
    int i;

    int index;
    // LEGGERE LE CASE
    for(i=0;i<MAX;i++){
        c[i] = leggeCasa();
    }
    // STAMPARE QUELLA CON COSTO MINORE DI METRIQUADRI
    index = cercaMinoreMetriQuadri(c, MAX);
    stampaCasa(c[index]);

    // MIGLIORE CLASSE ENERGETICA
    index = cercaMiglioreClasseEnergetica(c, MAX);
    stampaCasa(c[index]);
    return 0;
}