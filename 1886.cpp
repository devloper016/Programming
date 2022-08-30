class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target) return true;
        int k=4;
        while(k>0){
              for(int i=0;i<mat.size();i++){
            for(int j=i+1;j<mat.size();j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<mat.size();i++){
            reverse(mat[i].begin(),mat[i].end());
        }
            
            if(mat==target) return true;
            k--;
        }
        return false;
    }
};
