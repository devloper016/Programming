class Solution {
public:
    int lps(string s,string s1){
        int n = s.size();
        int m = s1.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int j=0;j<=m;j++){
            dp[0][j] = 0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==s1[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
    int minInsertions(string s) {
        string s1 = s;
        int n = s.length();
        reverse(s.begin(),s.end());
        return n-lps(s,s1);
    }
};
