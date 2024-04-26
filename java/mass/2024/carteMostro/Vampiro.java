
enum tipoCarta{
    Umano,
    Mostro
}
public class Vampiro extends StandardCard{
    
    public Vampiro(){
        super(tipoCarta.Mostro, 15, 2, "Azzanno");
    }
}
