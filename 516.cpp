class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string st = s;
        reverse(st.begin(),st.end());
        int m = s.size();
        int n = st.size();
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0) dp[i][j] = 0;
            }
        }
        if(dp[m][n]!= -1) return dp[m][n];
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==st[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[m][n];
    }
};
