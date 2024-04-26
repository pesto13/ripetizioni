public abstract class Prodotto {
    
    private String id;
    private Double price;

    public Prodotto(String id, Double price){
        this.id = id;
        this.price = price;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public Double getPrice() {
        return price;
    }

    public void setPrice(Double price) {
        this.price = price;
    }

    public abstract boolean equals(Prodotto p);

    public String toString(){
        String oString = "";
        oString += "id: " + id  + "\n";
        oString += "price: " + price  + "\n";
        return oString;
    }

}
