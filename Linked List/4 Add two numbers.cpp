class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h = new ListNode(-100);
        ListNode* last = h;

        int c = 0;
        while(l1 != NULL && l2 != NULL){
        int s = l1 -> val + l2 -> val + c;
        c = s/10;
        s = s%10;
        ListNode* temp = new ListNode(s);
        last  -> next = temp; 
        last = last -> next;
        l1 = l1 -> next;
        l2 = l2 -> next ; 
        }    

        if(l1 != NULL){
            while(l1 != NULL){
   int s = l1 -> val + c;
            c = s/10;
            s %= 10;
            ListNode* temp = new ListNode(s);
            last -> next = temp;
            last = last -> next;
            l1 = l1 -> next;
            }
         
        }    
           if(l2 != NULL){
            while(l2 != NULL){
            int s = l2 -> val + c;
            c = s/10;
            s %= 10;
                        ListNode* temp = new ListNode(s);
            last -> next = temp;
            last = last -> next;
            l2 = l2 -> next;
            }      
        }   
        if(c != 0 ){
            ListNode* temp = new ListNode(c);
            last -> next = temp;
        }
         last = last -> next;
         return h -> next;
    }
};
