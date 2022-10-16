class Solution {
public:
    int dp[301][11];
    int sol(vector<int> &jobDifficulty,int d,int i,int n){
        if(d==1){
            return dp[i][d] = *max_element(jobDifficulty.begin()+i,jobDifficulty.end());
        }
        if(dp[i][d]!= -1){
            return dp[i][d];
        }
        int cur = INT_MIN;
        int res = INT_MAX;
        for(int j=i;j<=n-d;j++){
            cur = max(cur,jobDifficulty[j]);
            res = min(res,cur+sol(jobDifficulty,d-1,j+1,n));
        }
        dp[i][d] = res;
        return dp[i][d];
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(n<d) return -1;
        memset(dp,-1,sizeof(dp));
        return sol(jobDifficulty,d,0,n);
    }
};
