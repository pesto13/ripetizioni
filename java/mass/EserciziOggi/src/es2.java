public class es2 {
    

    public static void main(String[] args) {
        String s = "Ciao mondo";
        int counterA = 0;
        int counterE = 0;
        int counterI = 0;
        int counterO = 0;
        int counterU = 0;

        int partenza = 0;
        boolean continua = true;
        while (continua){
            partenza = s.indexOf('a', partenza);
            if(partenza == -1)
                continua = false;
            else{
                partenza++;
                counterA++;
            }
        }

        continua = true;
        partenza = 0;
        while (continua){
            partenza = s.indexOf('e', partenza);
            if(partenza == -1)
                continua = false;
            else {
                partenza++;
                counterE++;
            }

        }
        partenza = 0;
        continua = true;
        while (continua){
            partenza = s.indexOf('i', partenza);
            if(partenza == -1)
                continua = false;
            else{
                partenza++;
                counterI++;
            }

        }
        partenza = 0;
        continua = true;
        while (continua){
            partenza = s.indexOf('o', partenza);
            if(partenza == -1)
                continua = false;
            else {
                partenza++;
                counterO++;
            }

        }
        partenza = 0;
        continua = true;
        while (continua){
            partenza = s.indexOf('u', partenza);
            if(partenza == -1)
                continua = false;
            else {
                partenza++;
                counterU++;
            }

        }


        System.out.println(counterA);
        System.out.println(counterE);
        System.out.println(counterI);
        System.out.println(counterO);
        System.out.println(counterU);
    }

}
