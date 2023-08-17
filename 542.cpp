class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!mat[i][j]){
                    q.push({i,j});
                }
            }
        }
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,-1,0,1};
        int t=0;
        while(!q.empty()){
            t++;
            int k = q.size();
            while(k--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nrow = row+delrow[i];
                    int ncol = col+delcol[i];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]==1){
                        mat[nrow][ncol] = 0;
                        dis[nrow][ncol] = t;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
        return dis;
    }
};
