class Solution {
    
public:
    string convert(string s, int numRows)
    {
        
       map<int,string> m;
        int i = 1;
        int op = 1;
        for(auto c:s){
            m[i]+=c;
            i = i + op;
            if(i == 1)
                op = 1;
            if(i == numRows)
                op = -1;
        }
        s = "";int a=1;
        for(auto p:m)
    {
            s+=p.second;
    }
        return s;
        
    }
};