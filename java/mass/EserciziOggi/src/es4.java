
import java.util.InputMismatchException;
import java.util.Scanner;

public class es4 {

    public static int[] createIntArray(int n, Scanner s){
        int[] array = new int[n];
        for (int i = 0;i<n;i++){
            try{
                array[i] = s.nextInt();
            }catch (InputMismatchException e){
                e.printStackTrace();
            }
        }
        return array;
    }

    public static void printArray(int[] array){
        for(int i = 0;i < array.length;i++){
            System.out.println(array[i]);
        }
    }

    public static int countodd(int[] array){
        int counter = 0;
        for(int i = 0; i<array.length; i++){
            if(array[i] %2 == 1)
                counter++;
        }
        return counter;
    }

    public static void main(String[] args){
        int[] array;
        int n;
        int counter;
        Scanner s = new Scanner(System.in);
        System.out.println("Inserisci lunghezza array: ");
        n = s.nextInt();
        array = createIntArray(n, s);

        counter = countodd(array);
        printArray(array);

        System.out.println("Sono presenti: " + counter);
    }
}
