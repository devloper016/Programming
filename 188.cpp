class Solution {
public:
    int dp[1001][2][101];
    int sol(int k,vector<int> &prices,int i,bool b){
        if(k<0){
            return 0;
        }
        if(i == prices.size()){
            return 0;
        }
        if(dp[i][b][k]!= -1){
            return dp[i][b][k];
        }
        int maxi = INT_MIN;
        if(b){
            maxi = max(maxi, - prices[i]+sol(k-1,prices,i+1,!b));
        }
        else{
            maxi = max(maxi,prices[i]+sol(k,prices,i+1,!b));
        }
        
        maxi  = max(maxi,sol(k,prices,i+1,b));
        return dp[i][b][k] = maxi;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return sol(k,prices,0,true);
    }
};
