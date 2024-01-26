class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m =matrix.size(),n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int ans;
        if(matrix[0][0]==1) ans=1;
        else ans=0;
        for(int i=1;i<n;i++){
            if(matrix[0][i]==1){
                ans++;
                dp[0][i] = 1;
            }
        }
        for(int i=1;i<m;i++){
            if(matrix[i][0]==1){
                ans++;
                dp[i][0] = 1;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==1){
                    dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
                }
                ans+=dp[i][j];
            }
        }
        return ans;
    }
};
