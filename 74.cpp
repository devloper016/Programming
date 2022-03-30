class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       if(matrix.empty()) return false;
        int row = matrix.size();
        int col = matrix[0].size();
        if(matrix[0][0]>target || matrix[row-1][col-1]<target) return false;
        int s=0,e=row*col-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            int mid_val = matrix[mid/col][mid%col];
            
            if(mid_val==target) return true;
            
            else if(mid_val<target) s = mid+1;
            
            else e = mid-1;
        }
        return false;
    }
};
