import java.io.File;  // Import the File class
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.regex.*;
public class Tokenizer {

    String root = "MATERIE/";
    ArrayList<String> stopWords;

    public Tokenizer(ArrayList<String> stopWords){
        this.stopWords = stopWords;
    }

    public void createTFFile(){
        File folder = new File(root);
        File[] listOfOutersDirectories = folder.listFiles();
        for(File outerDirectory : listOfOutersDirectories){
            try {
                File myObj = new File(outerDirectory+File.separator+outerDirectory.getName()+"_terms_frequency.txt");
                if (myObj.createNewFile()) {
                    System.out.println("File created: " + myObj.getName());
                } else {
                    System.out.println("File already exists.");
                }
            } catch (IOException e) {
                System.out.println("An error occurred.");
                e.printStackTrace();
            }

        }
    }



    public void createALLMAPS(){
        File folder = new File(root);
        File[] listOfOutersDirectories = folder.listFiles();
        for(File outerDirectory : listOfOutersDirectories){
            createSingleMap(outerDirectory);
        }
    }


    private void createSingleMap(File outerDirectory) {
        for(File singleFile: outerDirectory.listFiles()){
            Pattern pattern = Pattern.compile(".*terms_frequency.*");
            if (!pattern.matcher(singleFile.getName()).matches()) {
                Scanner myReader = null;
                try {
                    myReader = new Scanner(singleFile);
                } catch (FileNotFoundException e) {
                    e.printStackTrace();
                }
                while (myReader.hasNextLine()) {
                    String data = myReader.next();
                    if(!stopWords.contains(data)){
                        //System.out.println(data);
                        //TODO fare la mappa<string, int>
                    }

                }
                myReader.close();
            }
        }

        //TODO salva la mappa
    }




}
