class Solution {
public:
    int sol(int i,int j,vector<vector<int>> &dp,vector<vector<int>>&obstacleGrid){
        if(i<0 || j<0) return 0;
        if(i>=0 && j>=0 && obstacleGrid[i][j]== 1) return 0;
        
        if(i==0 && j==0) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int up = sol(i-1,j,dp,obstacleGrid);
        int right = sol(i,j-1,dp,obstacleGrid);
        
        return dp[i][j] = up+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=  obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return sol(n-1,m-1,dp,obstacleGrid);
    }
};
