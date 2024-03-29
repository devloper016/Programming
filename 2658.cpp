class Solution {
public:
    void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<int>> &grid,int &fish){
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        fish += grid[row][col];
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,-1,0,1};
        for(int i=0;i<4;i++){
            int nrow = delrow[i]+row;
            int ncol = delcol[i]+col;
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]){
                dfs(nrow,ncol,vis,grid,fish);
            }
        }
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size(),m=grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]>0){
                    int fish = 0;
                    dfs(i,j,vis,grid,fish);
                    ans = max(fish,ans);
                }
            }
        }
        return ans;
    }
};
