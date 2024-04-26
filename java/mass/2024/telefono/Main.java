public class Main {
    public static void main(String[] args) {
        Tablet t = new Tablet("mioID", 12.0, 20);
        Tablet t2 = new Tablet("mioID2", 324324.0, 20);
        Telefono tel = new Telefono("mioID3", 324324.0, 34254325);
        Telefono tel2 = new Telefono("mioID4", 2342343.0, 34254325);
        System.out.println(t.equals(t2));
    }
}
