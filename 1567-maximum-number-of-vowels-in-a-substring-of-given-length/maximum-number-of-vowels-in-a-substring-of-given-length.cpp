class Solution {
public:
   /* int checks(vector<char> &t, int k)
    {
        int ans=0;
        for(int i=0;i<k;i++)
        {
            if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
            {
                ans++;
            }
        }
        return ans;
    }

    int maxVowels(string s, int k) 
    {
        int ans=0;
        vector<char>t;

        for(int i=0;i<k;i++)
        {
            t.push_back(s[i]);
        }
        ans=checks(t,k);
        int ans1;
        for(int i=1,right=k;right<s.length();i++,right++)
        {
            t.erase(t.begin());
            t.push_back(s[right]);
            ans1=checks(t,k);
            if(ans<ans1)
                ans=ans1;
        }
        return ans;
        
    }*/
     int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int max_total = 0;
        int running_total = 0;
        for (int i = 0; i < s.size(); ++i) {
            running_total += vowels.find(s[i]) != vowels.end() ? 1 : 0;
            if (i - k >= 0) {
                running_total -= vowels.find(s[i - k]) != vowels.end() ? 1 : 0;
            }
            max_total = max(max_total, running_total);
        }
        return max_total;
    }
};