class Graph {
public:
    vector<vector<int>>adj;
    Graph(int n, vector<vector<int>>& edges) {
        adj = vector<vector<int>>(n,vector<int>(n,1e8));
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u][v] = wt;
        }
        for(int i=0;i<n;i++) adj[i][i] =0;
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }
    }
    void addEdge(vector<int> edge) {
        int n = adj.size();
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
           for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    adj[i][j] = min(adj[i][j],adj[i][u]+adj[v][j]+wt);
                }
        }     
    }
    int shortestPath(int node1, int node2) {
        if(adj[node1][node2]== 1e8) return -1;
        return adj[node1][node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
