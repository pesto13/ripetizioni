public class ProdottoScontato extends Prodotto{
    

    private final int percSconto = 10;

    
    public ProdottoScontato(
        String descrizione,
        String nome,
        double prezzo,
        ProductCategory categoria
        ){
            super(descrizione, nome, prezzo, categoria);
        }

}
