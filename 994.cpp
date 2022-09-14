class Solution {
public:
    bool isvalid(int i,int j,int R,int C){
        if(i>=0 && j>=0 && i<R && j<C) return true;
        return false;
    }
int orangesRotting(vector<vector<int>>& grid) {
    int m= grid.size();
    int n = grid[0].size();
    queue<pair<int,int>> q;
    int fresh=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==2){
                q.push({i,j});
            }
            else if(grid[i][j]==1) fresh++;
        }
    }
    q.push({-1,-1});
    bool flag;
    pair<int,int> front;
    int i,j,ans=0;
    while(!q.empty()){
        flag = false;
        while(q.front().first!= -1){
            front = q.front();
            i = front.first;
            j = front.second;
            if(isvalid(i,j+1,m,n)&&grid[i][j+1]==1){
                if(!flag){
                    ans++;
                    flag = true;
                }
                fresh--;
                grid[i][j+1] = 2;
                q.push({i,j+1});
            }
            if(isvalid(i,j-1,m,n)&&grid[i][j-1]==1){
                if(!flag){
                    ans++;
                    flag= true;
                }
                fresh--;
                grid[i][j-1] = 2;
                q.push({i,j-1});
            }
            if(isvalid(i-1,j,m,n)&&grid[i-1][j]==1){
                if(!flag){
                    ans++;
                    flag = true;
                }
                fresh--;
                grid[i-1][j] = 2;
                q.push({i-1,j});
            }
            if(isvalid(i+1,j,m,n)&&grid[i+1][j]==1){
                if(!flag){
                    ans++;
                    flag = true;
                }
                fresh--;
                grid[i+1][j] = 2;
                q.push({i+1,j});
            }
            q.pop();
        }
        q.pop();
        if(!q.empty()) q.push({-1,-1});
    }
    return fresh != 0?-1:ans;
}
};
