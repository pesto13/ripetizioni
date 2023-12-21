import java.util.Date;

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


    public void getCDWithDate(Date givenDate){
        for(int i = 0; i < gestore.length; i++){
            if(gestore[i].getDataCreazione().equals(givenDate)){
                gestore[i].stampaCD();
            }
        }
    }

    public void getEtàMinimaAutore(){
        Date minimo = gestore[0].getDataNascita();
        int posMinima = 0;
        for(int i = 1; i < gestore.length; i++){
            if(gestore[i].getDataNascita().before(minimo)){
                minimo = gestore[i].getDataNascita();
                posMinima = i;
            }
        }
        System.out.println(gestore[posMinima].getAutore());
    }

}
