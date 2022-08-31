class Solution {
public:
    void recur(vector<vector<int>> &matrix,int i,int j,int prev,vector<vector<int>>&ocean){
        if(i<0 || j<0 || i>=matrix.size() || j>= matrix[0].size()){
            return;
        }
        if(ocean[i][j]==1) return;
        if(matrix[i][j]<prev) return;
        
        ocean[i][j] = 1;
        
        recur(matrix,i+1,j,matrix[i][j],ocean);
        recur(matrix,i-1,j,matrix[i][j],ocean);
        recur(matrix,i,j+1,matrix[i][j],ocean);
        recur(matrix,i,j-1,matrix[i][j],ocean);   
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        
        vector<vector<int>> ans;
        
        if(matrix.size()<1) return ans;
        vector<vector<int>> pacific(matrix.size(),vector<int>(matrix[0].size(),0));
        vector<vector<int>> atlantic(matrix.size(),vector<int>(matrix[0].size(),0));
        
        for(int i=0;i<matrix[0].size();i++){
            recur(matrix,0,i,INT_MIN,pacific);
            recur(matrix,matrix.size()-1,i,INT_MIN,atlantic);
        }
        
        for(int j=0;j<matrix.size();j++){
            recur(matrix,j,0,INT_MIN,pacific);
            recur(matrix,j,matrix[0].size()-1,INT_MIN,atlantic);
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(atlantic[i][j] == 1 && pacific[i][j]==1){
                    vector<int> v(2);
                    v[0] = i;
                    v[1] = j;
                    
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
};
