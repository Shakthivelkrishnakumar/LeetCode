class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans;
        int temp=0;
        for(int i=0;i<candies.size();i++)
        {
            candies[i]+=extraCandies;
            for(int j=0;j<candies.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(candies[i]>=candies[j])
                {
                    cout<<candies[i]<<" "<<candies[j]<<"\n";
                    temp=1;
                }
                else
                {
                    temp=0;
                    break;
                }
            }
            if(temp==1)
            {
                ans.push_back(true);
            }
            else if(temp==0)
            {
                ans.push_back(false);
            }
            temp=0;
            candies[i]-=extraCandies;
        }

        return ans;
        
    }
};