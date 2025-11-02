class Solution {
public:
pair<ListNode*, ListNode*> reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* newNode = NULL;

        while(curr != NULL){
            newNode  = curr -> next;
            curr -> next = prev ; 
            prev  = curr;
            curr = newNode;
        } return {prev, head};
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || head == NULL) return head;

        ListNode* curr = head ,  *prev = NULL;
        int i =1; // if i =1 then we don't need to traverse the list
       
        while( left != i && curr -> next != NULL){
              prev = curr;
            curr = curr -> next;
            i++;
          
        } 
     //   ListNode *rightNode = head ;
        ListNode* head1 = curr;
        while(i != right && curr -> next != NULL){
            
            curr = curr -> next;
             i++;
        }
    
        ListNode* leftNode = curr -> next;
          curr -> next = NULL;
    pair<ListNode*, ListNode*> rev = reverse(head1);
        if(prev == NULL)
       { head = rev.first;}
        else
       { prev -> next = rev.first;
       }
        rev.second -> next = leftNode;
 return head ;
      
        }
};
