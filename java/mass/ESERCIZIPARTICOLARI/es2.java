import java.util.ArrayList;


public void decompressRLElist(ArrayList<Integer> nums) {
    
    ArrayList<Integer> answer = new ArrayList<Integer>();

    for(int i=0 ; i < nums.size(); i=i+2){
        for ( int j=0 ; j < nums.get(i+1); i++)
            answer.add(nums.get(i));
    }

    System.out.println(answer);
}


List<Integer> list = new ArrayList<>(Arrays.asList(1, 2, 3));

decompressRLElist(s);