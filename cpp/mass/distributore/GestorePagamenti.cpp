#include "GestorePagamenti.h"

GestorePagamenti::GestorePagamenti() {
    saldo = 0;
}

float GestorePagamenti::getSaldo() {
    return saldo;
}

void GestorePagamenti::setSaldo(float soldiPlus) {
    saldo = soldiPlus;
}


void GestorePagamenti::addSaldo(float soldiPlus) {
    saldo += soldiPlus;
}

///////////////////////////////////////

GestoreMoneta::GestoreMoneta() {
    saldo = 0;
}

float GestoreMoneta::daiResto() {
    float s = saldo;
    saldo = 0;
    return s;
}


bool GestoreMoneta::paga(float soldiPlus) {
    if (saldo < soldiPlus)
        return false;

    saldo = saldo - soldiPlus;
    return true;
}

