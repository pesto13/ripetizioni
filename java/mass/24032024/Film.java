public class Film {

    private String titolo;
    private String autore;
    private String produttore;
    private String genere;
    private int durata;

    public Film(String titolo, String autore, String produttore, String genere, int durata) {
        this.titolo = titolo;
        this.autore = autore;
        this.produttore = produttore;
        this.genere = genere;
        this.durata = durata;
    }

    public String getTitolo() {
        return titolo;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }

    public String getAutore() {
        return autore;
    }

    public void setAutore(String autore) {
        this.autore = autore;
    }

    public String getProduttore() {
        return produttore;
    }

    public void setProduttore(String produttore) {
        this.produttore = produttore;
    }

    public String getGenere() {
        return genere;
    }

    public void setGenere(String genere) {
        this.genere = genere;
    }

    public int getDurata() {
        return durata;
    }

    public void setDurata(int durata) {
        this.durata = durata;
    }

    public void stampaInformazioni() {
        System.out.println("Titolo: " + titolo);
        System.out.println("Autore: " + autore);
        System.out.println("Produttore: " + produttore);
        System.out.println("Genere: " + genere);
        System.out.println("Durata: " + durata + " minuti");
    }
}
