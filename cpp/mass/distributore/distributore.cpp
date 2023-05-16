#include<iostream>
#include<distributore.h>



Distributore::Distributore() {
    incasso_totale = 0;
    prodotto p = { "", 0.0, 0, 0} ;

    for(int i = 0;i<N_SLOT;i++){
        prodotti[i] = p;
    }
}

bool Distributore::inserisci_prodotto(int slot, prodotto p) {


    //inserimento vuoto
    if(prodotti[slot].nome==""){
        prodotti[slot] = p;
        return true;
    }
        
    
    //aggiunta oggetto
    else if(prodotti[slot].nome==p.nome){
        prodotti[slot].quantita+=p.quantita;
        return true;
    }
        
    
    //rifornimento con nuovo prodotto, solo se è vuoto
    else if(prodotti[slot].quantita==0 && p.nome!= prodotti[slot].nome){
        prodotti[slot].nome = p.nome;
        prodotti[slot].quantita = p.quantita;
        prodotti[slot].costo = p.costo;
        return true;
    }

    return false;
}

void Distributore::mostra_prodotti() {
    for (int i = 0; i < 10; i++) {
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

    float soldi = gm.getSaldo();

    if (prodotti[slot].quantita == 0)
        return mancaProdotto;
    if (slot >= N_SLOT || slot < 0)
        return slotNonEsiste;
    if (soldi < prodotti[slot].costo) {
        return mancanoSoldi;
    }

    prodotti[slot].quantita--;
    prodotti[slot].incasso += prodotti[slot].costo;
    incasso_totale += prodotti[slot].costo;

    gm.daiResto(prodotti[slot].costo);

    return ok;
}

float Distributore::get_incasso_totale()  {
    return incasso_totale;
}


