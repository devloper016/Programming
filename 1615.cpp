class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> adj[n];
        int ans=0;
        for(auto it: roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int currank = adj[i].size()+adj[j].size();
                for(int k = 0; k<adj[i].size();k++){
                    if(adj[i][k]==j) currank--;
                }
                 ans = max(ans,currank);
            }
            
        }
        return ans;
    }
};
