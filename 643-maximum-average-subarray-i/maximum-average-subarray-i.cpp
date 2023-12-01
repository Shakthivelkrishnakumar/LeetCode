class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double ans=0,max=0;
        if(nums.size()==1)
        {
        ans=nums[0]/k;
        return ans;
        }
        for(int i=0;i<k;i++)
        {
            ans+=nums[i];
        }
        double ans1=ans;
        for(int i=1,right=k;right<nums.size();i++,right++)
        {
            ans1=ans1-nums[i-1]+nums[right];
            if(ans<ans1)
                ans=ans1;

        }
        return ans/k;
        
    }
};