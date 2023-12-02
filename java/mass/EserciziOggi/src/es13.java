public class es13 {



    public static void main(String[] args) {


        int[] T = null;
        try{
            T[0] = 7;
        }catch (NullPointerException e){
            e.printStackTrace();
        }

        System.out.println(12);

    }



}
