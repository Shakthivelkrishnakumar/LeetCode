class Solution {
    public int removeElement(int[] nums, int val)
    {
        ArrayList<Integer> a=new ArrayList<>();
        int i=0;
       for(i=0;i<nums.length;i++)
       {
           if(nums[i]!=val)
            a.add(nums[i]);     
       }
       for(i=0;i<a.size();i++)
       {
           nums[i]=a.get(i);
       }
       return a.size();
    }
}