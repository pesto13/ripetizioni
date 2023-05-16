#include "GestorePagamenti.h"


float GestorePagamenti::getSaldo(){
    return saldo;
}

void GestorePagamenti::setSaldo(float soldiPlus){
    saldo = soldiPlus;
}


void GestorePagamenti::addSaldo(float soldiPlus){
    saldo += soldiPlus;
}


///////////////////////////////////////

GestoreMoneta::GestoreMoneta(){
    saldo = 0;
}

float GestoreMoneta::daiResto(float spesa){
    return saldo - spesa; 
}

