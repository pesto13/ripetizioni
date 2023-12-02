public class Tavolo {

    private Pizza2[] pizzaArray;
    private int nPosti;
    private String codice;


    public Tavolo() {
        this.pizzaArray = new Pizza2[0];
        this.nPosti = 0;
        this.codice = "";
    }


    public Tavolo(Pizza2[] pizzaArray, int nPosti, String codice) {
        this.pizzaArray = pizzaArray;
        this.nPosti = nPosti;
        this.codice = codice;
    }

    public double conto(){
        double costoPizze = 0;

        for(int i = 0;i<pizzaArray.length;i++){
            costoPizze += pizzaArray[i].getPrezzo();
        }

        return nPosti * 2 + costoPizze;
    }

}
