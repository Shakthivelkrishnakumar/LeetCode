class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int max1=INT_MAX;
        int max2=INT_MAX;
        for(auto i: nums)
        {
            if(i<=max1)
            max1=i;
            else if(i<=max2)
            max2=i;
            else
            return true;
        }
        return false;
    }
};