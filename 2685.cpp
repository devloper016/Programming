class Solution {
public:
    void dfs(int i,vector<vector<int>>&adj,vector<int> &vis,vector<int> &path){
        vis[i] = 1;
        path.push_back(i);
        for(auto it : adj[i]){
                if(!vis[it]){
                    dfs(it,adj,vis,path);
                }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        int ans=0;
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<int> path;
                dfs(i,adj,vis,path);
                int cnt=0;
                for(int j=0;j<path.size();j++){
                    if(adj[path[j]].size()>= path.size()-1) cnt++;
                    if(cnt == path.size()) ans++;
                }
            }
        }
        return ans;
    }
};
