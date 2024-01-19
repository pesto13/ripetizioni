import com.sun.source.tree.Tree;

import java.io.File;  // Import the File class
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.security.KeyPair;
import java.util.*;
import java.util.regex.*;
public class Tokenizer {

    String root = "MATERIE/";
    ArrayList<String> stopWords;
    ArrayList<Map<String, Integer>> mappaMateria;
    ArrayList<LinkedHashMap<String, Integer>> sortedMaps;

    public Tokenizer(ArrayList<String> stopWords){
        this.stopWords = stopWords;
        this.mappaMateria = new ArrayList<>();
        this.sortedMaps = new ArrayList<>();
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
            mappaMateria.add(createSingleMap(outerDirectory));
        }

        //todo

        for(Map m : mappaMateria){
            List<Map.Entry<String, Integer>> listaVoci = new ArrayList<>(m.entrySet());

            // Ordinamento della lista in base ai valori (integer)
            Collections.sort(listaVoci, new Comparator<Map.Entry<String, Integer>>() {
                @Override
                public int compare(Map.Entry<String, Integer> entry1, Map.Entry<String, Integer> entry2) {
                    return entry2.getValue().compareTo(entry1.getValue());
                }
            });

            // Creazione di una nuova LinkedHashMap per mantenere l'ordine
            LinkedHashMap<String, Integer> hashMapOrdinata = new LinkedHashMap<>();

            // Aggiunta delle voci ordinate alla nuova LinkedHashMap
            for (Map.Entry<String, Integer> entry : listaVoci) {
                hashMapOrdinata.put(entry.getKey(), entry.getValue());
            }
            sortedMaps.add(hashMapOrdinata);
        }


        //TODO ordinare mappa
        int counter = 0;
        for(File outerDirectory : listOfOutersDirectories){
            for(File innerFile: outerDirectory.listFiles()){
                Pattern pattern = Pattern.compile(".*terms_frequency.*");
                if (pattern.matcher(innerFile.getName()).matches()) {
                    //System.out.println(counter);
                    writeOnTermFrequencyFile(innerFile, sortedMaps.get(counter));
                    counter++;
                }
            }
        }
    }

    private void writeOnTermFrequencyFile(File innerfile, Map<String, Integer> mappa){
        try {
            FileWriter myWriter = new FileWriter(innerfile);

            for (Map.Entry<String, Integer> entry : mappa.entrySet()) {
                myWriter.write(entry.getKey() + ": " + entry.getValue() + '\n');
            }
            myWriter.close();
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }


    private Map<String, Integer> createSingleMap(File outerDirectory) {

        // qua abbiamo la nostra mappa della singola materia
        Map<String, Integer> tempmap = new HashMap<>();

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
                    String word = myReader.next();
                    if(!stopWords.contains(word)){
                        if(tempmap.containsKey(word)){
                            int value = tempmap.get(word);
                            tempmap.put(word, value+1);
                        }else{
                            tempmap.put(word, 1);
                        }
                    }

                }
                myReader.close();
            }
        }

        return tempmap;
    }




}
