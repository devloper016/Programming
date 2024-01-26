class Solution {
public:
   int mod = 1e9+7;
    int sol(int row,int col,int m,int n,int cnt,vector<vector<vector<int>>> &dp){
        if((row<0 || col<0 || row>=m || col>=n) && cnt>=0) return 1;
        if(cnt<=0) return 0;
        if(dp[row][col][cnt]!= -1) return dp[row][col][cnt];
        int dx[] = {-1,0,1,0};
        int dy[] = {0,-1,0,1};
        int s =0;
        for(int i=0;i<4;i++){
            int nrow = row+dx[i];
            int ncol = col+dy[i];
            s= ((s%mod)+(sol(nrow,ncol,m,n,cnt-1,dp)%mod))%mod;
        }
        return dp[row][col][cnt] = s%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int c = maxMove;
        vector<vector<vector<int>>> dp(m+2,vector<vector<int>>(n+2,vector<int>(c+1,-1)));
        return sol(startRow,startColumn,m,n,c,dp);
    }
};
