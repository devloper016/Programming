class Solution {
public:
    pair<long long,long long> sol(int u,int v,vector<int> adj[],vector<int> &values){
        if(adj[u].size()==1 && u!=0) return {0,values[u]};
        
        vector<pair<long long,long long>> a;
        for(auto it:adj[u]){
            if(it==v) continue;
            a.push_back(sol(it,u,adj,values));
        }
        long long fsum = 0,ssum=0;
        for(auto [f,s]:a){
            fsum+=f;
            ssum+=s;
        }
        fsum = max(ssum,fsum+values[u]);
        return {fsum,ssum+values[u]};
        
    }
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        long long ans=0;
        int n = edges.size()+1;
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }
        ans = sol(0,-1,adj,values).first;
        return ans;
    }
};
