class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> hm = new HashMap<Integer, Integer>();
        for(int i:nums)
        {
            int x;
            if(hm.containsKey(i))
            x=hm.get(i);
            else 
            x=0;
            hm.put(i,x+1);
        }
         int max = Collections.max(hm.entrySet(), Map.Entry.comparingByValue()).getKey();
  return max;
    }
}
