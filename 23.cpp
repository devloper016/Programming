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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        
        ListNode *head = new ListNode(-1);
        ListNode *node = head;
        int n = lists.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            ListNode *newhead = lists[i];
            while(newhead!=NULL)
            {
                pq.push(newhead->val);
                newhead = newhead->next;
            }
        }
        while(pq.empty()!=true)
        {
            node->next = new ListNode(pq.top());
            pq.pop();
            node = node->next;
        }
        return head->next;
    }
};
