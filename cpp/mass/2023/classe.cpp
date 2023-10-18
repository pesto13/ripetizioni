#include<iostream>
using namespace std;



class libro {

  private:
    int nPagine;
    string nome;
    float prezzo;




    public:
     
    //costruttore senza parametri
    libro() {
      nPagine = 0;
      nome = "";
      prezzo = 0;
    }

    //costruttore con parametri
    libro(int np, string n, float p) {
      nPagine = np;
      nome = n;
      prezzo = p;
    }

    void setter_nPagine(int np){
        nPagine = np;
    }

    void setter_nome(string n){
        nome = n;
    }

    void setter_prezzo(float np){
        prezzo = np;
    }


    int getter_nPagine(){
        return nPagine;
    }


    void stampa(){
        cout<<nPagine<<endl<<nome<<endl<<prezzo<<endl;
    }

    float sommaDiPrezzi(libro other){
        return prezzo + other.prezzo;
    }

    bool is_maggiore(libro l2){
        if(nPagine > l2.nPagine){
            return true;
        }else{
            return false;
        }
    }

};


int main(){
    libro l = libro(12, "titanic", 12.2);
    libro l2 = libro();
    
    l.stampa();
    
    float prezzoFinale = l.sommaDiPrezzi(l2);

    cout<<prezzoFinale;
    l.is_maggiore(l2);
}