class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> left;
        vector<int> right;
        vector<int> ans;
        int prod=1;
        left.push_back(1);
        for(int i=1;i<nums.size();i++)
        {
            prod*=nums[i-1];
            left.push_back(prod);
        }
        prod=1;
        right.push_back(1);
        for(int i=nums.size()-2;i>=0;i--)
        {
            prod*=nums[i+1];
            right.push_back(prod);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(left[i]*right[i]);
        }
        return ans;
    }
};