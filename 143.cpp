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
    ListNode* rev(ListNode* head){
        if(head==NULL) return NULL;
        ListNode* pre = NULL;
        ListNode* cur = head;
        while(cur!=NULL){
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head || !head->next || !head->next->next) return;
        while(fast->next !=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* cur = slow->next;
        ListNode* pre = NULL;
        while(cur){
            ListNode* tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        slow->next = NULL;
        ListNode *a = head,*b = pre;
        while(a && b){
            ListNode* tmp = a->next;
            ListNode* t = b->next;
            a->next = b;
            b->next =  tmp;
            a = tmp;
            b = t;
        }
    }
};
