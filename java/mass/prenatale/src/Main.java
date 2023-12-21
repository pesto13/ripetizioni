import java.util.Date;

public class Main {
    public static void main(String[] args) {

        Canzone c1 = new Canzone(123, "titolo1");
        Canzone c2 = new Canzone(345, "titolo2");
        Canzone c3 = new Canzone(678, "titolo3");
        Canzone c4 = new Canzone(910, "titolo4");
        Canzone c5 = new Canzone(111, "titolo5");
        Canzone c6 = new Canzone(222, "titolo6");

        Date d = new Date();

        CD disk1 = new CD(new Canzone[]{c1, c3, c4}, "marioBROS", "titolo1", d, new Date());
        CD disk2 = new CD(new Canzone[]{c2, c5, c6}, "luigi", "titolo2", d, new Date());
        CD disk3 = new CD(new Canzone[]{c4, c1, c2}, "mario", "titolo3", new Date(), new Date());
        CD disk4 = new CD(new Canzone[]{c5, c3, c6}, "yoshi", "titolo4", d, new Date());

        GestoreDisci gestoreDisci = new GestoreDisci(new CD[]{disk1, disk2, disk3, disk4});

        gestoreDisci.getEtàMinimaAutore();
    }
}