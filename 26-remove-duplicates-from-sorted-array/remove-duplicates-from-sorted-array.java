class Solution {
    public int removeDuplicates(int[] nums)
    {
        Stack<Integer> s=new Stack<>();
        int i=0;
        for(int x:nums)
        {
            if(i==0)
            {
                s.push(x);
                i++;
            }
            else
            {
                if(x!=s.peek())
                {
                    s.push(x);
                }
            }
        }
        int a=s.size();
        for(i=s.size()-1;i>=0;i--)
        {
            nums[i]=s.pop();
        }
        return a;
        
    }
}