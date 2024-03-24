import java.util.ArrayList;

public class Sala {

    private ArrayList<Spettatore>spettatori;
    private int numPersoneMAX;
    private Film riferimentoFilm;

    public Sala(int numPersoneMAX,Film riferimentoFilm){
        this.spettatori = new ArrayList<Spettatore>();
        this.numPersoneMAX = numPersoneMAX;
        this.riferimentoFilm = riferimentoFilm;
    }

    public Film getFilm(){
        return riferimentoFilm;
    }

    public ArrayList<Spettatore> getSpettatori(){
        return spettatori;
    }

    public int numPostiLiberi(){
        return numPersoneMAX - spettatori.size();
    }

    public void svuotaSala(){
        spettatori.clear();
    }

    public boolean consentiIingresso(Spettatore s){
        if(numPostiLiberi()>0){
            spettatori.add(s);
            return true;
        }
        return false;
    }

}



