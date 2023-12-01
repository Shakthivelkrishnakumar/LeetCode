class Solution {
public:
    int maxArea(vector<int>& h) {
        int back=h.size()-1;
        int front=0;
        int max=0,maximum=0;
        while(back>front)
        {
            if(h[back]>h[front])
            {
            max=h[front]*(back-front);
            }
            else
            {
            max=h[back]*(back-front);
            }
            if(max>maximum)
            {
                maximum=max;
            }
            if(h[front]<h[back])
                front++;
            else
                back--;

            
            
        }
        return maximum;
        
    }
};