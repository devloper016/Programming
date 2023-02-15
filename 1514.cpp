class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int, double>> adj[n];
        for(int i=0; i<edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        vector<double> prob(n , 0);
        prob[start] = 1.0;
        priority_queue<pair<double,int>> pq;
        pq.push({(double)1.0,start});
        while(!pq.empty()){
            auto front = pq.top();
            pq.pop();
            int node = front.second;
            double nodeprob = front.first;
            
            if(node==end) return nodeprob;
            
            for(auto i:adj[node]){
                if(nodeprob*i.second>prob[i.first]){
                    prob[i.first] = nodeprob*i.second;
                    pq.push({prob[i.first],i.first});
                }
            }
        }
        return 0;
    }
};
