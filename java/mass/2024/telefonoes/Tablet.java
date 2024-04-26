public class Tablet extends Prodotto{
    
    private double inches;

    public Tablet(String id, Double price, double inches){
        super(id, price);
        this.inches = inches;
    }

    public Double getInches() {
        return inches;
    }

    public void setInches(double inches) {
        this.inches = inches;
    }

    public boolean equals(Prodotto p){
        Tablet other = (Tablet) p;
        return inches == other.getInches();
    }

    @Override
    public String toString(){
        String oString = super.toString();
        return oString + "inches: " + inches + "\n";
    }

}
