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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* cur = dummy,*tmp = dummy,*pre = dummy;
        
        int count=0;
        while(cur!=NULL && cur->next != NULL){
            cur = cur->next;
            count++;
        }
        while(count>=k){
            cur = pre->next;
            tmp = cur->next;
            for(int i=1;i<k;i++){
                cur->next=tmp->next;
                tmp->next = pre->next;
                pre->next = tmp;
                tmp = cur->next;
            }
            pre = cur;
            count -= k;
        }
        return dummy->next;
    }
};
