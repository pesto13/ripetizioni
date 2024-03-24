import java.time.LocalDate;

public class Spettatore {

    private int idSpettatore;
    private String nome;
    private String cognome;
    private LocalDate dataDiNascita;
    private Biglietto biglietto;
    private int eta;

    public Spettatore(int idSpettatore, String nome, String cognome, LocalDate dataDiNascita, Biglietto biglietto, int eta) {
        this.idSpettatore = idSpettatore;
        this.nome = nome;
        this.cognome = cognome;
        this.dataDiNascita = dataDiNascita;
        this.biglietto = biglietto;
        this.eta = eta;
        this.biglietto.setEta(eta);
    }

    public int getIdSpettatore() {
        return idSpettatore;
    }

    public void setIdSpettatore(int idSpettatore) {
        this.idSpettatore = idSpettatore;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public LocalDate getDataDiNascita() {
        return dataDiNascita;
    }

    public int getEta() {
        return eta;
    }

    public void setDataDiNascita(LocalDate dataDiNascita) {
        this.dataDiNascita = dataDiNascita;
    }

    public Biglietto getBiglietto() {
        return biglietto;
    }

    public void setBiglietto(Biglietto biglietto) {
        this.biglietto = biglietto;
    }

    public void setEta(int eta) {
        this.eta = eta;
    }

    public void stampaInformazioni() {
        System.out.println("ID Spettatore: " + idSpettatore);
        System.out.println("Nome: " + nome);
        System.out.println("Cognome: " + cognome);
        System.out.println("Data di nascita: " + dataDiNascita);
        System.out.println("Biglietto: " + biglietto.getInfo());
    }
}