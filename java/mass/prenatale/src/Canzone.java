public class Canzone {

    private int durata;
    private String titolo;

    public Canzone(int durata, String titolo) {
        this.durata = durata;
        this.titolo = titolo;
    }

    public int getDurata() {
        return durata;
    }

    public void setDurata(int durata) {
        this.durata = durata;
    }

    public String getTitolo() {
        return titolo;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }
}
