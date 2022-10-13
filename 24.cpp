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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* cur = head;
        while(cur && cur->next){
            pre->next = cur->next;
            cur->next = pre->next->next;
            pre->next->next = cur;
            
            pre  = cur;
            cur = cur->next;
        }
        return dummy->next;
    }
};
