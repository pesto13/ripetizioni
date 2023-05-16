

class GestorePagamenti{

    protected:
        float saldo;

    public:
        virtual float daiResto(float spesa);
        virtual bool paga(float soldiPlus);

        float getSaldo();
        void setSaldo(float soldiPlus);
        void addSaldo(float soldiPlus);
};


class GestoreMoneta : public GestorePagamenti{
    
    public:
        
        GestoreMoneta();

        float daiResto(float spesa);

};