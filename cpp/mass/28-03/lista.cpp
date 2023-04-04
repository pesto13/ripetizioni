#include<iostream>
using namespace std;


template <class T>
class Node{
    private:
        T valore;
        Node* prossimo;

    public:

        Node(T val){
            valore = val;
            prossimo = NULL;
        }

        T getValore(){
            return valore;
        }

        Node* getProssimo(){
            return prossimo;
        }

        void setValore(T val){
            valore = val;
        }

        void setProssimo(Node* n){
            prossimo = n;
        }
};

template <class T>
class Lista{

    private:
        Node<T>* testa;

    public:
        Lista(){
            testa = NULL;
        }

    // inserire un nuovo elemento
    void inserisci(T valore){
        Node<T>* nuovoNodo = new Node<T>(valore);

        if(testa == NULL){
            testa = nuovoNodo;
        }else{
            nuovoNodo->setProssimo(testa);
            testa = nuovoNodo;
        }

    }


    void stampa(){
        Node<T>* temp;

        while(temp != NULL){
            cout<<temp->getValore()<<" ";
            temp = temp->getProssimo();
        }
    }
};



int main(){

    Lista<int> l;

    l.inserisci(4);
    l.inserisci(3);
    l.inserisci(6);

    l.stampa();

    return 0;
}



