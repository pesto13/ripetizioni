import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        
        List<List<Integer>> answer = new ArrayList<List<Integer>>();

        for(Integer i1 : nums1){
            boolean insert = true;
            for(Integer i2 : nums2){
                if(i1 == i2)
                    insert = false;
            }

            if(insert)
                answer.get(0).add(i1);
        }


        for(Integer i1 : nums2){
            boolean insert = true;
            for(Integer i2 : nums1){
                if(i1 == i2)
                    insert = false;
            }

            if(insert)
                answer.get(1).add(i1);
        }

    }
}