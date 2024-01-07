import java.io.File;  // Import the File class
import java.io.FileNotFoundException;  // Import this class to handle errors
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner; // Import the Scanner class to read text files

public class StopWordCreator {

    private ArrayList<String> stopWord;

    // Costruttore
    public StopWordCreator() {
        stopWord = new ArrayList<>();

        readStopWordsFile("src/stopWORDS.txt");
    }

    // Getter
    public ArrayList<String> getStopWord() {
        return stopWord;
    }

    // Setter
    public void setStopWord(ArrayList<String> stopWord) {
        this.stopWord = stopWord;
    }

    public void printStopWords(){
        for(String s : stopWord){
            System.out.println(s);
        }
    }

    private void readStopWordsFile(String fileName){
        try {
            File myObj = new File(fileName);
            Scanner myReader = new Scanner(myObj);
            while (myReader.hasNextLine()) {
                String data = myReader.nextLine();
                data = data.strip();
                stopWord.add(data);
            }
            myReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

    }
}
