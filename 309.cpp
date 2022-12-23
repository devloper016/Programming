class Solution {
public:
    int dfs(int i , int turn , vector<int>& prices){
        if(i >= prices.size()) return 0;
        if(turn == 0){
            return max(-prices[i] + dfs(i + 1 , 1 , prices) , dfs(i + 1 , 0 , prices));
        }
        else if(turn == 1){
            return max(prices[i] + dfs(i + 1 , 2 , prices) , dfs(i + 1 , 1 , prices)) ;
        }
        else{
            return dfs(i + 1 , 0 , prices);
        }
    }
    int maxProfit(vector<int>& prices) {
        return dfs(0 , 0 , prices);
    }
};
