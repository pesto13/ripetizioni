public class GestoreDisci {

    private CD[] gestore;

    // Costruttore
    public GestoreDisci(CD[] gestore) {
        this.gestore = gestore;
    }

    // Getter per il gestore di CD
    public CD[] getGestore() {
        return gestore;
    }

    // Setter per il gestore di CD
    public void setGestore(CD[] gestore) {
        this.gestore = gestore;
    }


    ///////////////////////////


    public CD[] cdAutore(String autore){
        CD[] cdTrovati;

        int DIM = 0;
        int j = 0;

        for(int i=0;i<gestore.length;i++){
            if(gestore[i].getAutore().equals(autore)) {
                DIM++;
            }
        }

        cdTrovati = new CD[DIM];

        for(int i=0;i<gestore.length;i++){
            if(gestore[i].getAutore().equals(autore)) {
                cdTrovati[j] = gestore[i];
                j++;
            }
        }
        return cdTrovati;
    }

    //trova il CD sul quale modificare i dati
    //cd.modificaCD
}
