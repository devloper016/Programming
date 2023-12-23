class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
       int m = score.size();
        int n = score[0].size();
        
        vector<vector<int>> ans(m,vector<int>(n,0));
        
        vector<pair<int,int>> tmp;
        for(int i=0;i<m;i++){
            tmp.push_back({score[i][k],i});
        }
        sort(tmp.begin(),tmp.end());
        reverse(tmp.begin(),tmp.end());
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j] = score[tmp[i].second][j];
            }
        }
        
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<'\n';
        // }
        
        return ans;
    }
};
