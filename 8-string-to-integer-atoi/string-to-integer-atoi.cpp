class Solution {
public:
    int myAtoi(string s) {
        stringstream str(s);
        int i = 0;
        str >> i;
        return i;
    }
};