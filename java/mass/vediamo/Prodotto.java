import java.text.DecimalFormat;

public class Prodotto {

    public enum ProductCategory {
        ALIMENTARI,
        IGIENE_PERSONALE,
        CASALINGHI,
        COSMETICI
    }

    private static int staticCodiceUnivoco = 0;

    private int codiceUnivoco;
    private String descrizione;
    private String nome;
    private double prezzo;
    private ProductCategory categoria;

    public Prodotto() {
    }

    // Costruttore con parametri
    public Prodotto(String descrizione, String nome, double prezzo, ProductCategory categoria) {
        staticCodiceUnivoco += 1;
        this.codiceUnivoco = staticCodiceUnivoco;
        this.descrizione = descrizione;
        this.nome = nome;
        this.prezzo = prezzo;
        this.categoria = categoria;
    }

    // Getter e Setter per codiceUnivoco
    public int getCodiceUnivoco() {
        return codiceUnivoco;
    }

    public void setCodiceUnivoco(int codiceUnivoco) {
        this.codiceUnivoco = codiceUnivoco;
    }

    // Getter e Setter per descrizione
    public String getDescrizione() {
        return descrizione;
    }

    public void setDescrizione(String descrizione) {
        this.descrizione = descrizione;
    }

    // Getter e Setter per nome
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    // Getter e Setter per prezzo
    public double getPrezzo() {
        return prezzo;
    }

    public void setPrezzo(double prezzo) {
        this.prezzo = prezzo;
    }

    // Getter e Setter per categoria
    public ProductCategory getCategoria() {
        return categoria;
    }

    public void setCategoria(ProductCategory categoria) {
        this.categoria = categoria;
    }

    /////////////////////////////////////////

    public double calcolaPrezzo(){
        return prezzo * 1.20;
    }

    public final void impostaGenere(boolean isGenereAlimentare){
        if(isGenereAlimentare)
            categoria = ProductCategory.ALIMENTARI;
    }

    public void visualizzaDettaglio(){
        DecimalFormat df = new DecimalFormat("#.00");
        System.out.println( "Codice Univoco: " + codiceUnivoco + "\n" +
            "Descrizione: " + descrizione + "\n" +
            "Nome: " + nome + "\n" +
            "Prezzo: " + df.format(prezzo) + "\n" +
            "Categoria: " + categoria);
    }

}