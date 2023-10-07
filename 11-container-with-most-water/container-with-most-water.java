class Solution {
    public int maxArea(int[] height) 
    {
        int temp=0,i,j,ans=0;
        for(i=0,j=height.length-1;i<height.length-1&&j>i;)
        {   
            if(height[i]<height[j])
            {
                temp=(j-i)*height[i];
                i++;
            }
            else
            {
                temp=(j-i)*height[j];
                j--;
            }
            if(temp>=ans)
            ans=temp;
        }
        return ans;
    }
}