public class nuotatore {

    int identificatore;
    String nome;
    String cognome;
    int eta;
    boolean sesso;
    double peso;
    SchedaAllenamento scheda;


    public nuotatore(int identificatore, String nome, String cognome, int eta, boolean sesso, double peso, SchedaAllenamento scheda) {
        this.identificatore = identificatore;
        this.nome = nome;
        this.cognome = cognome;
        this.eta = eta;
        this.sesso = sesso;
        this.peso = peso;
        this.scheda = scheda;
    }

    // Getter per identificatore
    public int getIdentificatore() {
        return identificatore;
    }

    // Setter per identificatore
    public void setIdentificatore(int identificatore) {
        this.identificatore = identificatore;
    }

    // Getter per nome
    public String getNome() {
        return nome;
    }

    // Setter per nome
    public void setNome(String nome) {
        this.nome = nome;
    }

    // Getter per cognome
    public String getCognome() {
        return cognome;
    }

    // Setter per cognome
    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    // Getter per età
    public int getEta() {
        return eta;
    }

    // Setter per età
    public void setEta(int eta) {
        this.eta = eta;
    }

    // Getter per sesso
    public boolean isSesso() {
        return sesso;
    }

    // Setter per sesso
    public void setSesso(boolean sesso) {
        this.sesso = sesso;
    }

    // Getter per peso
    public double getPeso() {
        return peso;
    }

    // Setter per peso
    public void setPeso(double peso) {
        this.peso = peso;
    }

    // Getter per scheda
    public SchedaAllenamento getScheda() {
        return scheda;
    }

    // Setter per scheda
    public void setScheda(SchedaAllenamento scheda) {
        this.scheda = scheda;
    }


}
