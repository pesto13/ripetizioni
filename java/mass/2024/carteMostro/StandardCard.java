enum tipoCarta{
    Umano,
    Mostro
}

public abstract class StandardCard {
    public tipoCarta tCarta;
    public int forza;
    public int decremento;
    public String azione;

    public StandardCard(
        tipoCarta tCarta,
        int forza,
        int decremento,
        String azione
        ){
            this.tCarta = tCarta;
            this.forza = forza;
            this.decremento = decremento;
            this.azione = azione;
        }

    public String doAzione(){
        forza -= decremento;
        return azione;
    }

}
