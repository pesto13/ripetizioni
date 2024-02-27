



public class CalcolatriceDifficile {
    
    public CalcolatriceDifficile() {}
    
    public void eseguiOperazione(int input){
        try{
            if(input < 0)
                throw new CustomException("Input non valido", TipoErrore.ERRORE_INPUT);
            
            else if(input > 100)
                throw new CustomException("Output non valido", TipoErrore.ERRORE_OUTPUT);
            
            else
                System.out.println(input);
                
        } catch (CustomException e){
		    System.out.println(e.getMessage() + e.getTipoErrore());
		}
    }
    
}