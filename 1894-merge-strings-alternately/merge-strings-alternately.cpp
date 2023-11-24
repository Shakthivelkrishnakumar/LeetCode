class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans=word1+word2;
        while(word1[i]!='\0'&& word2[i]!='\0')
        {
            ans[j]=word1[i];
            ans[j+1]=word2[i];
            j=j+2;
            i++;
        }
        if(word1[i]=='\0')
        {
            while(word2[i]!='\0')
            {
                ans[j]=word2[i];
                j++;
                i++;
            }
        }
        else
        {
            while(word1[i]!='\0')
            {
                ans[j]=word1[i];
                j++;
                i++;
            }
        }
        cout<<ans.size();
        return ans;

        
    }
};