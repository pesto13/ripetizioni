public class Telefono extends Prodotto{
    
    private int gigabyte;

    public Telefono(String id, int price, int gigabyte){
        super(id, price);
        this.gigabyte = gigabyte;
    }

    public int getGigabyte() {
        return gigabyte;
    }

    public void setGigabyte(int gigabyte) {
        this.gigabyte = gigabyte;
    }

    public boolean equals(Prodotto p){
        Telefono other = (Telefono) p;
        return gigabyte == other.getGigabyte();
    }

    @Override
    public String toString(){
        String oString = super.toString();
        return oString + "gigabyte: " + gigabyte + "\n";
    }

}
