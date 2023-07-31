class Solution {
public:
    int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){
        if(dp[i][j]!= -1) return dp[i][j];
        if(i==s1.size()){
            int sum=0;
            for(int k=j;k<s2.size();k++){
                sum += (int)s2[k];
            }
            return sum;
        }
        if(j==s2.size()){
            int sum=0;
            for(int k=i;k<s1.size();k++){
                sum+= (int)s1[k];
            }
            return sum;
        }
        int mc = min(s1[i]+solve(s1,s2,i+1,j,dp),s2[j]+solve(s1,s2,i,j+1,dp));
        int mkc=1e9;
        if(s1[i]==s2[j]){
            mkc = solve(s1,s2,i+1,j+1,dp);
        }
        return dp[i][j] = min(mc,mkc);
    }
    int minimumDeleteSum(string s1, string s2) {
        int m=s1.size(),n=s2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(s1,s2,0,0,dp);
        
    }
};
