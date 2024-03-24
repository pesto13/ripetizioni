import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class Cinema{

    private ArrayList<Sala>sale;
    HashMap<String, Integer> genere;

    public Cinema(ArrayList<Sala> sale){
        this.sale = sale;
        genere = new HashMap<String, Integer>();
        preparaHashMap();
    }

    private void preparaHashMap(){
        for (Sala s : sale){
            String g = s.getFilm().getGenere();
            int spett = s.getSpettatori().size();
            
            if(genere.get(g) == null)
                genere.put(g, spett);
            else
                genere.put(g, genere.get(g) + spett);
        }
    }


    public void calcolaStatisticheGenere(){

        int denominatore = 0;
        for (Map.Entry<String, Integer> entry : genere.entrySet()){
            denominatore+= entry.getValue();
        }

        for (Map.Entry<String, Integer> entry : genere.entrySet()){
            System.out.println("Genere: " + entry.getKey());
            System.out.println("Percentuale: " + (entry.getValue()/denominatore*100));
        }

    }



}