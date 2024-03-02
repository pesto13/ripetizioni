import java.util.ArrayList;

public class AgendaTelefonica {

    private ArrayList<Contatto> agenda;
    private String nome;
    
    public AgendaTelefonica(String nome){
        this.nome = nome;
        this.agenda = new ArrayList<Contatto>();
    }


    public void rimuoviContatto(Contatto c){

        for(int i=0;i<agenda.size();i++){
            if(agenda.get(i).cognome.equals(c.cognome)){
                agenda.remove(i);
                i--;
            }
        }
    }
}