public class SchedaAllenamento {

    public enum Stile{
        DORSO,
        STILELIBERO,
        DELFINO,
        FARFALLA
    }

    private int durata;

    private Stile stile;

    private String s;

    public SchedaAllenamento(int durata, Stile s) {
        this.durata = durata;
        this.stile = s;
    }

    // Getter per durata
    public int getDurata() {
        return durata;
    }

    // Setter per durata
    public void setDurata(int durata) {
        this.durata = durata;
    }

    // Getter per stile
    public Stile getStile() {
        return this.stile;
    }

    // Setter per stile
    public void setStile(Stile stile) {
        this.stile = stile;
    }

}
