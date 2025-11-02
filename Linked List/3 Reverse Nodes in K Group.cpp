class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) return head;

        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;
 int cnt = 0;
        while(curr != NULL && cnt <k){
            forward = curr ->next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
             cnt++;
        }
        int len = 0;
        ListNode*  temp = forward;
        while(temp != NULL ){
         temp = temp -> next;
         len++;
        }
        if(temp == NULL && len >= k){
            head -> next = reverseKGroup(forward, k);
        }else{
 head -> next = forward;
        }   
        return prev;
    }
};