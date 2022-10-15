class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return NULL;
        vector<int> tmp;
        while(head){
            tmp.push_back(head->val);
            head = head->next;
        }
        sort(tmp.begin(),tmp.end());
        ListNode* dummy = new ListNode(tmp[0]);
        ListNode* prev = dummy;
        for(int i=1;i<tmp.size();i++){
            ListNode* temp = new ListNode(tmp[i]);
            prev->next = temp;
            prev = prev->next;
        }
        return dummy;
    }
};
