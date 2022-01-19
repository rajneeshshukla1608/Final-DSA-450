/*It has both recursive as well as iterrative approach*/
/*IterativeTC - O(n)
  RecursiveTC - O(n) SC - Only Recursive Stack
*/
// ***********Iterative***********
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode *p = NULL, *c = head, *n = head->next;
        while(c!=NULL){
            c->next = p;
            p = c;
            c = n;
            if(n!=NULL) n = n->next;
        }
        return p;
    }
};

//****************Recursive*****************
class Solution {
public:
    
    ListNode* reverse(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode *reversehead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return reversehead;
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        return reverse(head);
    }
};
