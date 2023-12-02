
import java.util.Random;
import java.util.Scanner;

public class es1 {


    // crea una matrice NxN con numeri casuali

    public static int[][] createRandomMatrix(int n){
        Random r = new Random();
        int[][] matrix = new int[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrix[i][j] = r.nextInt(100);
            }
        }
        return matrix;
    }


    // stampa matrice

    public static void printMatrix(int[][] matrix, int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }


    // Trasposizione matrice
    public static int[][] trasposeMatrix(int[][] matrix, int n){

        int[][] trasposta = new int[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                trasposta[i][j] = matrix[j][i];
            }
        }
        return trasposta;
    }


    public static void main(String[] args) {
        int[][] matrix;

        matrix = createRandomMatrix(3);
        printMatrix(matrix, 3);

        matrix = trasposeMatrix(matrix, 3);
        printMatrix(matrix, 3);
    }
}
