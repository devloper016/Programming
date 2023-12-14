class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> onr(m,0),onc(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    onr[i]+=1;
                    onc[j]+=1;
                }
            }
        }
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j] = 2*onr[i]+2*onc[j]-(m+n);
            }
        }
        return ans;
    }
};
