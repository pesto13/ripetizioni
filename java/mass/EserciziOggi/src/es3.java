public class es3 {

    public static void main(String[] args) {

        String s = "ciao come stai io oggi sto bene";
        String[] parole = s.split(" ");
        for( String singola : parole){
            System.out.println(singola);
        }


        int partenza = 0;
        boolean continua = true;
        while (continua){
            partenza = s.indexOf(' ', partenza);
            if(partenza == -1)
                continua = false;
            else{
                System.out.println("Spazio bianco in: " + partenza);
                partenza++;
            }
        }


        for(int i = 0;i<s.length();i++){
            if(s.charAt(i)==' ')
                System.out.println("trovato spazio bianco in " + i);
        }
    }
}
