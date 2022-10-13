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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        ListNode* prev = head;
        ListNode* cur = head->next;
        int count=1;
        vector<int> tmp;
        while(cur->next){
            if((cur->val>prev->val && cur->val > cur->next->val)||(cur->val <prev->val && cur->val<cur->next->val)){
                tmp.push_back(count);
            }
            count++;
            prev = prev->next;
            cur = cur->next;
        }
        if(tmp.size()<2){
            return {-1,-1};
        }
        int mn = INT_MAX;
        for(int i=0;i<tmp.size()-1;i++){
            mn = min(tmp[i+1]-tmp[i],mn);
        }
        ans.push_back(mn);
        ans.push_back(tmp[tmp.size()-1]-tmp[0]);
        return ans;
    }
};
