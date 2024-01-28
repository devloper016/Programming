class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                matrix[i][j] += matrix[i][j-1];
            }
        }
        int count=0;
        for(int k=0;k<n;k++){
            for(int j=k;j<n;j++){
                unordered_map<int,int> mp;
                mp[0] =1;
                int s=0;
                for(int i=0;i<m;i++){
                    s+=matrix[i][j] - (k>0 ? matrix[i][k-1]:0);
                    count+=mp[s-target];
                    mp[s]++;
                }
            }
        }
        return count;
    }
};
