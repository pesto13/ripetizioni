public class Pizza2 {
    private String farina;
    private boolean salsa;
    private boolean formaggio;
    private String[] extra;
    private double prezzo;

    public String getFarina() {
        return farina;
    }

    public void setFarina(String farina) {
        this.farina = farina;
    }

    public boolean isSalsa() {
        return salsa;
    }

    public void setSalsa(boolean salsa) {
        this.salsa = salsa;
    }

    public boolean isFormaggio() {
        return formaggio;
    }

    public void setFormaggio(boolean formaggio) {
        this.formaggio = formaggio;
    }

    public String[] getExtra() {
        return extra;
    }

    public void setExtra(String[] extra) {
        this.extra = extra;
    }

    public double getPrezzo() {
        return prezzo;
    }

    public void setPrezzo(double prezzo) {
        this.prezzo = prezzo;
    }

    public Pizza2(){
        farina = "";
        salsa = false;
        formaggio = false;
        extra = new String[3];
        prezzo = 0.0;
    }

    public Pizza2(String farina, boolean salsa, boolean formaggio, String[] extra, double prezzo){
        this.farina = farina;
        this.formaggio = formaggio;
        this.salsa = salsa;
        this.extra = extra;
        this.prezzo = prezzo;
    }


    public void stampa(){
        System.out.println(farina);
        System.out.println(salsa);
        System.out.println(formaggio);
        System.out.println(prezzo + "$");

        for(int i=0;i<extra.length;i++){
            if(extra[i] == null)
                break;

            System.out.println(extra[i]);
        }
    }
}
