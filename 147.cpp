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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* cur  = head, *prev = dummy;
        dummy->next = head;
        while(cur){
            if(cur->next && (cur->next->val < cur->val)){
                while(prev->next &&(prev->next->val < cur->next->val)) prev = prev->next;
                    ListNode* tmp = prev->next;
                    prev->next = cur->next;
                    cur->next = cur->next->next;
                prev->next->next = tmp;
                prev = dummy;
            }
            else{
                cur=cur->next;
            }
        }
        return dummy->next;
    }
};
