
#include <string>
#include "GestorePagamenti.h"
using namespace std;

struct prodotto
{
    string nome;
    float costo;
    int quantita;
    float incasso;
};



enum esito{
    ok = 0,
    mancanoSoldi = 1,
    mancaProdotto = 2,
    slotNonEsiste = 3
};

 


const int N_SLOT = 10;

class Distributore{

    private:

        prodotto prodotti[N_SLOT];
        float incasso_totale;
        GestoreMoneta gm;
    public:

        Distributore();

        float get_incasso_totale();
        void set_incasso_totale(float value);

        void mostra_prodotti();
        bool inserisci_prodotto(int slot, prodotto p);

        esito rilascio(int slot);



};