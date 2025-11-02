/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
       ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;

        ListNode* curr =head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
            if( head == NULL) return head;
           if(k== 0) return head;

           int cnt =0;
           ListNode* curr = head;
           ListNode* Kth = head;
           ListNode* r = Kth -> next;
           ListNode* l = head;

           while( curr != NULL){
            curr = curr -> next;
            cnt++;
           }
           k = k% cnt;

           for(int i=0 ; i< cnt -k - 1; i++){
            if(Kth == NULL) return head;

            Kth = Kth -> next;
           }
        
           r = Kth -> next;
           Kth -> next= NULL; 
           r = reverseList(r);
           l = reverseList(l);
           head -> next = r;
           l = reverseList(l);
           return l;

    }
};