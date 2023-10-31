class Solution {
    public boolean isValid(String s)
    {
        Stack<Character> a=new Stack<Character>();
        int i=0;
        int f=0;
        while(i<s.length())
        {
            if(s.charAt(i)=='{'||s.charAt(i)=='('||s.charAt(i)=='[')
            {
                a.push(s.charAt(i));
            }
            else
            {
                f=1;
                if(!a.isEmpty()){
                if(s.charAt(i)=='}')
                {
                    Character n=a.pop();
                    if(n!='{')
                        return false;
                }
                else if(s.charAt(i)==')')
                {
                    Character n=a.pop();
                    if(n!='(')
                        return false;
                }
                else if(s.charAt(i)==']')
                {
                    Character n=a.pop();
                    if(n!='[')
                        return false;
                }
                }
                else
                {
                    return false;
                }
            }
            i++;

        }
        if (f==0)
        return false;
        if(!a.isEmpty())
        return false;

        else
        return true;
    }
}
