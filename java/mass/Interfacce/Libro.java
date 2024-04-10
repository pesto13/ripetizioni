
import java.io.FileOutputStream;
import java.io.IOException;

public class Libro extends FileWriter implements Documenti{

    public String soggetto;
    public Integer costo;

    public Libro(String s, Integer c){
        soggetto = s;
        costo = c;
    }


    @Override
    public boolean uguale(Object x) {

        if( !(x instanceof Libro) ){
            System.err.println("non e libro");
            return false;
        }
        
        return soggetto.equals(((Libro) x).soggetto);
    }


    @Override
    public void writeOnFile(Boolean value) {
        
        String filePath = "file.dat";
        byte writeToFile = (byte) (value ? 1 : 0);

        try {
            FileOutputStream fos = new FileOutputStream(filePath);
            fos.write(writeToFile);
            fos.close();
            System.out.println(value);
        } catch (IOException e) {
            System.err.println("Errore durante la scrittura del file binario: " + e.getMessage());
            e.printStackTrace();
        }

    }

    
    

}