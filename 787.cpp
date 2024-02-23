class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        vector<pair<int,int>> adj[n];
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        vector<int> dist(n,1e9);
        pq.push({src,{0,0}});
        int ans=1e9;
        dist[src] = 0;
        while(!pq.empty()){
            int node = pq.top().first;
            int dis = pq.top().second.second;
            int stps = pq.top().second.first;
            pq.pop();
            for(auto it: adj[node]){
                int adjnode = it.first;
                int cost = it.second;
                int tmp = cost+dis;
                if(tmp<dist[adjnode] && stps<=k){
                    dist[adjnode] = tmp;
                    pq.push({adjnode,{stps+1,dist[adjnode]}});
                }
            }
        }
        if(dist[dst]==1e9) return -1;
        return dist[dst];
    }
};
