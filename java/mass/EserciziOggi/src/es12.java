public class es12 {



    public static void main(String[] args) {

        String s = null;
        int l = 0;
        try{
            l = s.length();
        }catch (NullPointerException e){
            e.printStackTrace();
        }

        System.out.println(l);

    }



}
