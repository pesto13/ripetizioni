public class main {
    
    public static void main(String[] args){
        

        Libro l1 = new Libro("Ciao", 21);
        Libro l2 = new Libro("Ciao", 21);
        Libro l3 = new Libro("Ciao", 21);

        l1.writeOnFile(l1.uguale(l2));
        l2.writeOnFile(l2.uguale(l3));
    }



}
