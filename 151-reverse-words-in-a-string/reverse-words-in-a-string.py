class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.split()
        ans=''
        for i in range(len(s)-1, -1, -1):
            ans+=s[i]
            if(i!=0):
                ans+=' '
            

        return ans

        