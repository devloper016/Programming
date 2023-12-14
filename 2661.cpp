class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int s = arr.size();
        unordered_map<int,pair<int,int>> mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[mat[i][j]] = {i,j};
            }
        }
        unordered_map<int,int> r,c;
        for(int i=0;i<s;i++){
            auto x = mp[arr[i]];
            r[x.first]++;
            c[x.second]++;
            
            if(r[x.first]==n || c[x.second]==m) return i;
        }
        return s;    
    }     
};
