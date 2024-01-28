class Solution {
public:
    void dfs(int row,int col,vector<vector<char>> &board,vector<vector<int>> &vis){
        vis[row][col] = 1;
        int m = board.size(),n=board[0].size();
        int dx[] = {-1,0,1,0};
        int dy[] = {0,-1,0,1};
        for(int i=0;i<4;i++){
            int nrow = row+dx[i];
            int ncol = col+dy[i];

            if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && board[nrow][ncol]=='X' && !vis[nrow][ncol]){
                dfs(nrow,ncol,board,vis);
            }
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size(),n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X' && !vis[i][j]){
                    cnt++;
                    dfs(i,j,board,vis);
                }
            }
        }
        return cnt;
    }
};
