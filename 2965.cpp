class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> vis(pow(n,2)+1,0);
        vector<int> ans(2,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    vis[grid[i][j]]++;
                }
            }
        }
        for(int i=1;i<vis.size();i++){
            if(vis[i]==0){
                ans[1] = i;
            }
            if(vis[i]==2){
                ans[0] = i;
            }
        }
        return ans;
    }
};
