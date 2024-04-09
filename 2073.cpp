class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int ans=0;
        int x = tickets[k];
        for(int i=0;i<n;i++){
            int tmp;
            if(i>k){
                tmp = x-1;
            }
            else tmp=x;
            ans+=min(tmp,tickets[i]);
        }
        return ans;
    }
};
