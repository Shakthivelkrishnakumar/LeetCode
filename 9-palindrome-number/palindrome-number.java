class Solution {
    public boolean isPalindrome(int x) 
    {
        int y=x;
       
        StringBuffer xxx=new StringBuffer();
        StringBuffer yyy=new StringBuffer();
        xxx.append(x);
        yyy.append(y);
        xxx.reverse();
        String xx=xxx.toString(); String yy=yyy.toString();
        if(xx.equals(yy))
        return true;
        else
        return false;

        
    }
}