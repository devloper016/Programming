class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* a = head;
        ListNode* b = head;
        while(n--){
            b = b->next;
        }
        if(b == NULL){
            return a->next;
        }
        while(b->next != NULL){
            a = a->next;
            b = b->next;
        }
        a->next = a->next->next;
        return head;
    }
};
