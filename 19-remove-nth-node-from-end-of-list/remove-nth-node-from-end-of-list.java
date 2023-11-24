class Solution {
    ListNode glo=null;
    int x=0;
    public ListNode removeNthFromEnd(ListNode head, int n)
    {
        ListNode tem=head;int c=0;
        LinkedList<Integer> a=new LinkedList<>();
        while(tem!=null)
        {
            a.add(tem.val);
            tem=tem.next;
            c++;
        }
        if(c!=0)
        a.remove(c-n);
        else
        return null;
        int i=0;
        if(a.isEmpty())
        return null;
        ListNode nn=new ListNode(a.get(i),null);

       tem=nn;
       a.remove(i);
        while(!a.isEmpty())
        {
            ListNode mm=new ListNode(a.get(i),null);
            tem.next=mm;
            tem=tem.next;
            a.remove(i);
        }
        return nn;
        
       
    }
   
}