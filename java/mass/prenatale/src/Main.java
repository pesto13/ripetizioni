public class Main {
    public static void main(String[] args) {

        Canzone c1 = new Canzone(123, "titolo1");
        Canzone c2 = new Canzone(345, "titolo2");
        Canzone c3 = new Canzone(678, "titolo3");
        Canzone c4 = new Canzone(910, "titolo4");
        Canzone c5 = new Canzone(111, "titolo5");
        Canzone c6 = new Canzone(222, "titolo6");

        CD disk1 = new CD(new Canzone[]{c1, c3, c4}, "mario", "titolo1");
        CD disk2 = new CD(new Canzone[]{c2, c5, c6}, "luigi", "titolo2");
        CD disk3 = new CD(new Canzone[]{c4, c1, c2}, "mario", "titolo3");
        CD disk4 = new CD(new Canzone[]{c5, c3, c6}, "yoshi", "titolo4");

        GestoreDisci gestoreDisci = new GestoreDisci(new CD[]{disk1, disk2, disk3, disk4});


        CD[] trovati = gestoreDisci.cdAutore("mario");

        for(int i=0;i<trovati.length;i++){
            System.out.println(trovati[i].getTitoloCD());;
        }
    }
}