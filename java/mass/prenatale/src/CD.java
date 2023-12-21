import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class CD {

    private Canzone[] canzoni;
    private String autore;
    private Date dataNascita;
    private String titoloCD;

    private Date dataCreazione;


    // Costruttore
    public CD(Canzone[] canzoni, String autore, String titoloCD, Date dataCreazione, Date dataNascita) {
        this.canzoni = canzoni;
        this.autore = autore;
        this.titoloCD = titoloCD;
        this.dataCreazione = dataCreazione;
        this.dataNascita = dataNascita;
    }

    // Getter per le canzoni
    public Canzone[] getCanzoni() {
        return canzoni;
    }

    // Setter per le canzoni
    public void setCanzoni(Canzone[] canzoni) {
        this.canzoni = canzoni;
    }

    // Getter per l'autore
    public String getAutore() {
        return autore;
    }

    // Setter per l'autore
    public void setAutore(String autore) {
        this.autore = autore;
    }

    public Date getDataCreazione() {return this.dataCreazione; }

    public void setDataCreazione(Date dataCreazione){ this.dataCreazione = dataCreazione;}

    public Date getDataNascita() {
        return dataNascita;
    }

    // Setter per dataNascita
    public void setDataNascita(Date dataNascita) {
        this.dataNascita = dataNascita;
    }

    //////////////////////////////////////////////


    public int cercaCanzone(String titoloCanzoneDaCercare){
        for(int i=0;i<canzoni.length;i++){
            if(canzoni[i].getTitolo().equals(titoloCanzoneDaCercare)){
                return canzoni[i].getDurata();
            }
        }
        return -1;
    }

    public void modificaCd(){
        Scanner s = new Scanner(System.in);
        System.out.println("Inserisci titolo: ");
        this.titoloCD = s.next();
        System.out.println("Inserisci autore: ");
        this.autore = s.next();
    }


    public String getTitoloCD() {
        return titoloCD;
    }

    public void setTitoloCD(String titoloCD) {
        this.titoloCD = titoloCD;
    }


    public void stampaCD(){
        System.out.println("Autore: " + autore);
        System.out.println("Titolo CD: " + titoloCD);

        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        String dataFormattata = sdf.format(dataCreazione);
        System.out.println("Data Creazione: " + dataFormattata);
    }
}
