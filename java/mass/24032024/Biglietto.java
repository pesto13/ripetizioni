public class Biglietto {

    private Double costoBiglietto;
    private String posizione;
    private int eta;

    // Costruttore
    public Biglietto(Double costoBiglietto, String posizione) {
        this.costoBiglietto = costoBiglietto;
        this.posizione = posizione;
    }

    // Getter per costoBiglietto
    public Double getCostoBiglietto() {
        return costoBiglietto;
    }

    // Setter per costoBiglietto
    public void setCostoBiglietto(Double costoBiglietto) {
        this.costoBiglietto = costoBiglietto;
    }

    // Getter per posizione
    public String getPosizione() {
        return posizione;
    }

    // Setter per posizione
    public void setPosizione(String posizione) {
        this.posizione = posizione;
    }

    public void setEta(int eta){
        this.eta = eta;
    }

    ////////////////////////////////////


    public boolean applicaRiduzioneAnziani(){
        if(eta > 70){
            costoBiglietto = costoBiglietto*0.9;
            return true;
        }
        return false;
    }

    public boolean applicaRiduzioneBambini(){
        if(eta < 5){
            costoBiglietto = costoBiglietto*0.5;
            return true;
        }
        return false;
    }

    public String getInfo(){
        return "Costo: " + costoBiglietto + " Posizione: " + posizione;
    }

}
