import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.regex.Pattern;
import java.util.Scanner;
import java.io.FileNotFoundException;

public class IDFCreator {

    private int D;
    private ArrayList<Integer> N_D;
    String root = "MATERIE/";
    private ArrayList<File> tfFiles;
    private ArrayList<String> arrayListAppoggio;

    public IDFCreator(){
        D = calculateD();
        tfFiles = createtfFiles();
        arrayListAppoggio = createArrayListAppoggio();
        N_D = new ArrayList<>();
    }

    // Constructor with parameters
    public IDFCreator(int d, ArrayList<Integer> nD) {
        this.D = d;
        this.N_D = nD;
    }

    // Getter for D
    public int getD() {
        return D;
    }

    // Setter for D
    public void setD(int d) {
        D = d;
    }

    // Getter for N_D
    public ArrayList<Integer> getN_D() {
        return N_D;
    }

    // Setter for N_D
    public void setN_D(ArrayList<Integer> nD) {
        N_D = nD;
    }



    ////////////////////////////


    private int calculateD(){
        int count = 0;
        File folder = new File(root);
        File[] listOfOutersDirectories = folder.listFiles();
        for(File outerDirectory : listOfOutersDirectories){
            count += outerDirectory.listFiles().length;
            count--;
        }
        return count;
    }

    private ArrayList<File> createtfFiles(){
        ArrayList<File> appoggio = new ArrayList<>();
        File folder = new File(root);
        File[] listOfOutersDirectories = folder.listFiles();
        for(File outerDirectory : listOfOutersDirectories){
            for(File innerFile : outerDirectory.listFiles()){
                Pattern pattern = Pattern.compile(".*terms_frequency.*");
                if (pattern.matcher(innerFile.getName()).matches()) {
                    appoggio.add(innerFile);
                }
            }
        }
        return appoggio;
    }

    private ArrayList<String> createArrayListAppoggio() {
        ArrayList<String> appoggio = new ArrayList<>();
        for(File tffile : tfFiles ){
            try{
                Scanner myReader = new Scanner(tffile);
                while (myReader.hasNextLine()) {
                    String data = myReader.nextLine();
                    data = data.substring(0, data.indexOf(':'));
                    appoggio.add(data);
                }
            }
            catch (FileNotFoundException e){
                System.out.println("An error occurred.");
                e.printStackTrace();
            }
        }
        return appoggio;
    }



}
