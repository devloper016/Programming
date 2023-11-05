class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i=0;i<n;i++){
            bool istrue = true;
            for(int j=0;j<n;j++){
                if(i!=j && grid[j][i]==1){
                    istrue=false;
                    break;
                }
            }
            if(istrue) return i;
        }
        return -1;
    }
};
