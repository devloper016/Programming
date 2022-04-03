class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int choice = prices[0];
        int n = prices.size();
        int profit=0;
        for(int i=1;i<n;i++){
            if(choice>prices[i]) choice = prices[i];
            else if(prices[i]>choice){
                profit += prices[i]-choice;
                choice = prices[i];
            }
        }
        return profit;
    }
};
