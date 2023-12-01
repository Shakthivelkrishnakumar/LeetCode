class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int r=nums.size()-1;
        int l=0;
        int ans=0;
        while(r>l)
        {
            if(nums[r]+nums[l]==k)
            {
                ans++;
                l++;r--;
            }
            else if(nums[r]+nums[l]>k)
            {
                r--;
            }
            else
            {
                l++;
            }

        }
        return ans;
        
    }
};