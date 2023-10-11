class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
       sort(nums.begin(), nums.end());
 
    
    int closestSum = 1000000000;
 

    for (int i = 0; i < nums.size() - 2; i++) {
 
        int ptr1 = i + 1, ptr2 = nums.size() - 1;
 
       
        while (ptr1 < ptr2) {
 
          
            int sum = nums[i] + nums[ptr1] + nums[ptr2];
             
              
              if (sum == target)
              return sum;
          
            if (abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }
 
            
            if (sum > target) {
                ptr2--;
            }
 
            // Else increment the first pointer
            // to get a larger sum
            else {
                ptr1++;
            }
        }
    }
 
    
    return closestSum;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*int closestSum = 36000;
 
    for (int i = 0; i < nums.size() ; i++)
    {
        for(int j =i + 1; j < nums.size(); j++)
        {
            for(int k =j + 1; k < nums.size(); k++)
            {
                //update the closestSum
                if(abs(target - closestSum) > abs(target - (nums[i] + nums[j] + nums[k])))
                    closestSum = (nums[i] + nums[j] + nums[k]);
            }
        }
    }
    
    return closestSum;
    }*/
    }
};