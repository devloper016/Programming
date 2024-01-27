class Solution {
public:
   int mod = 1e9+7;
    int dp[1001][1001];
    long sol(int n,int k){
        if(k<=0) return !k;
        if(n<=0) return 0;
        if(dp[n][k]!= -1) return dp[n][k];
        dp[n][k] = (sol(n-1,k)+sol(n,k-1))%mod;
        return dp[n][k] = (dp[n][k] -sol(n-1,k-n)+mod)%mod;
    }
    int kInversePairs(int n, int k) {
       memset(dp,-1,sizeof(dp));
        return sol(n,k);
    }
};
