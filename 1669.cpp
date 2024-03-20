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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* du = list2;
        ListNode* dur = list2;
        while(dur->next!=NULL){
            dur = dur->next;
        }
        int cnt=0,c=0;
        ListNode* cur = list1;
        ListNode* cu = list1;
        while(cur!=NULL){
            cnt++;
            if(cnt==a) break;
            cur = cur->next;
        }`
        while(cu!=NULL){
            if(c==b) break;
            cu = cu->next;
            c++;
        }
        //cout<<cur->val<<" "<<cu->val<<'\n';
        cur->next = du;
        dur->next = new ListNode();
        dur->next = cu->next;
        return list1;
    }
};
