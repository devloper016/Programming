class Solution {
public:
    int dp[1000001][2][3];
    int sol(vector<int> &prices,int i,int b,int k){
        if(k<0) return 0;
        if(i==prices.size()) return 0;
        if(dp[i][b][k]!= -1){
            return dp[i][b][k];
        }
        int mx = INT_MIN;
        if(b){
            mx = max(mx,-prices[i]+sol(prices,i+1,!b,k-1));
        }
        else{
            mx = max(mx,prices[i]+sol(prices,i+1,!b,k));
        }
        mx = max(mx,sol(prices,i+1,b,k));
        return dp[i][b][k] = mx;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return sol(prices,0,1,2);
    }
};
