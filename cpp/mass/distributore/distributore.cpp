#include<iostream>
#include "distributore.h"


Distributore::Distributore() {
    incasso_totale = 0;
    prodotto p = { "", 0.0, 0, 0 };

    for (int i = 0; i < N_SLOT; i++) {
        prodotti[i] = p;
    }
}

bool Distributore::inserisci_prodotto(int slot, prodotto p) {

    //inserimento vuoto
    if (prodotti[slot].quantita == 0) {
        p.incasso = prodotti[slot].incasso;
        prodotti[slot] = p;
        return true;
    }

    //aggiunta oggetto
    else if (prodotti[slot].nome == p.nome) {
        prodotti[slot].quantita += p.quantita;
        return true;
    }

    return false;
}

void Distributore::mostra_prodotti() {
    for (int i = 0; i < N_SLOT; i++) {
        cout << "Slot " << i << ": ";
        if (prodotti[i].quantita > 0) {
            cout << prodotti[i].nome << " (" << prodotti[i].costo << " euro) - Quantita' disponibile: " << prodotti[i].quantita << endl;
        }
        else {
            cout << "Slot vuoto" << endl;
        }
    }
}

esito Distributore::rilascio(int slot) {


    if (prodotti[slot].quantita == 0)
        return mancaProdotto;
    if (slot >= N_SLOT || slot < 0)
        return slotNonEsiste;
    if (!gm.paga(prodotti[slot].costo)) {
        return mancanoSoldi;
    }

    prodotti[slot].quantita--;
    prodotti[slot].incasso += prodotti[slot].costo;
    incasso_totale += prodotti[slot].costo;

    cout << "sono stati erogati: " << gm.daiResto();

    return ok;
}

float Distributore::get_incasso_totale() {
    return incasso_totale;
}


void Distributore::set_incasso_totale(float value) {
    incasso_totale = value;
}


