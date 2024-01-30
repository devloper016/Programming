class Solution {
public:
   int sol(int i,int j,bool turn,vector<int> &piles,vector<vector<int>> &dp){
       if(i>j) return 0;

       if(dp[i][j]!= -1) return dp[i][j];
       if(turn){
           int l = piles[i]+sol(i+1,j,!turn,piles,dp);
           int r = piles[j]+sol(i,j-1,!turn,piles,dp);
           return dp[i][j] = max(l,r);
       }
       int l = sol(i+1,j,!turn,piles,dp)-piles[i];
       int r = sol(i,j-1,!turn,piles,dp)-piles[j];
       return dp[i][j] = max(l,r);
   }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        bool turn = true;
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        return sol(0,n-1,true,piles,dp);
    }
};
