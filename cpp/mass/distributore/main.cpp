#include<iostream>
using namespace std;
#include "distributore.h"


int main() {


    prodotto p = { "pringles", 4.50, 1, 0 };

    Distributore d;

    d.gm.setSaldo(10);


    d.inserisci_prodotto(3, p);

    d.mostra_prodotti();

    d.rilascio(3);



    return 0;
}