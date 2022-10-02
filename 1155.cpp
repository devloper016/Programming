int M=1e9+7;
class Solution {
public:

int f(int n,int k,int t,vector<vector<int>> &dp){
    if(n==0 && t==0) return 1;
    if(n<=0 || t<=0) return 0;
    if(dp[n][t]!=-1) return dp[n][t];
    int ans=0;
    for(int i=1;i<k+1;i++){
        ans=(ans +f(n-1,k,t-i,dp)%M)%M;
    }
    return dp[n][t]=ans%M;
}
int numRollsToTarget(int n, int k, int t) {
    if(n>t) return 0;
    if(n==t) return 1;
    vector<vector<int>> dp(n+1,vector<int>(t+1,-1));
    return f(n,k,t,dp)%M;
}

};
