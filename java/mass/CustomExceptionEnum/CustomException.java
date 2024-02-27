

enum TipoErrore {
    ERRORE_INPUT,
    ERRORE_OUTPUT,
    ERRORE_GENERICO
}

public class CustomException extends Exception{
    
    private TipoErrore tipoErrore;
    
    public CustomException(String message, TipoErrore tipoErrore){
        super(message);
        this.tipoErrore = tipoErrore;
    }
    
    public TipoErrore getTipoErrore(){
        return tipoErrore;
    }
}