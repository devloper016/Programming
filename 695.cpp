class Solution {
public:
    int dfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis){
        vis[row][col] = 1;
        int m = grid.size(),n=grid[0].size();
        int dx[] = {-1,0,1,0};
        int dy[] = {0,-1,0,1};
        int ans=1;
        for(int i=0;i<4;i++){
            int nrow = row + dx[i];
            int ncol = col + dy[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                ans += dfs(nrow,ncol,grid,vis);
            }
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int mx = 0;
        int m = grid.size(),n=grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    mx = max(mx,dfs(i,j,grid,vis));
                }
            }
        }
        return mx;
    }
};
