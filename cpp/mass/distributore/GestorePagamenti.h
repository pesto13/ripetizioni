class GestorePagamenti {

protected:
    float saldo;

public:

    GestorePagamenti();


    float getSaldo();
    void setSaldo(float soldiPlus);
    void addSaldo(float soldiPlus);
};


class GestoreMoneta : public GestorePagamenti {

public:

    GestoreMoneta();

    float daiResto();
    bool paga(float soldiPlus);
};