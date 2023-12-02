public class pizza {

    private String farina;
    private boolean salsa;
    private boolean formaggio;
    private String[] extra;

    public pizza(){
        farina = "";
        salsa = false;
        formaggio = false;
        extra = new String[3];
    }

    public pizza(String farina, boolean salsa, boolean formaggio, String[] extra){
        this.farina = farina;
        this.formaggio = formaggio;
        this.salsa = salsa;
        this.extra = extra;
    }


    public void stampa(){
        System.out.println(farina);
        System.out.println(salsa);
        System.out.println(formaggio);

        for(int i=0;i<extra.length;i++){
            if(extra[i] == null)
                break;

            System.out.println(extra[i]);
        }

    }

    public static void main(String[] args){
        pizza p = new pizza();

        pizza p2 = new pizza(
            "grano",
            true,
            false,
            new String[]{
                "cipolla",
                "salsiccia",
            }
        );

        p2.stampa();
    }




}
