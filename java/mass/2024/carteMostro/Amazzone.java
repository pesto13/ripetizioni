package 2024.carteMostro;
enum tipoCarta{
    Umano,
    Mostro
}
public class Amazzone extends StandardCard{
    
    public Amazzone(){
        super(tipoCarta.Umano, 10, 3, "Combatte");
    }
}
