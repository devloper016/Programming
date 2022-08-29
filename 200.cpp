class Solution {
public:
    void mark(vector<vector<char>> &grid,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!= '1') return;
        
        grid[x][y]  = '2';
        mark(grid,x+1,y,r,c);
        mark(grid,x-1,y,r,c);
        mark(grid,x,y+1,r,c);
        mark(grid,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        if(row==0) return 0;
        int count=0;
        int col = grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]== '1' ){
                    mark(grid,i,j,row,col);
                    count++;
                }
            }
        }
        return count;
    }
};
