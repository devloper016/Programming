class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int s, int t) {
        int n = routes.size();
        if(s==t) return 0;
        queue<int> q;
        unordered_map<int,vector<int>> adj;
        unordered_set<int> vis;
        for(int i=0;i<n;i++){
            for(auto it: routes[i]){
                adj[it].push_back(i);
            }
        }
        for(auto it: adj[s]){
            q.push(it);
            vis.insert(it);
        }
        int cnt=1;
        while(!q.empty()){
            int sz = q.size();
            for(int i=0;i<sz;i++){
                int node = q.front();
                q.pop();
                
                for(auto it: routes[node]){
                    if(it==t) return cnt;
                    
                    for(auto i : adj[it]){
                        if(!vis.count(i)){
                            vis.insert(i);
                            q.push(i);
                        }
                    }
                }
                
            }
            cnt++;
        }
        return -1;
    }
};
