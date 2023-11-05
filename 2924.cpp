class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n,0);
        for(int i=0;i<edges.size();i++){
            indegree[edges[i][1]]++;
        }
        int cnt=0;
        int ans=-1;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                if(cnt>0){
                    return -1;
                }
                cnt++;
                ans = i;
            }
        }
        return ans;
    }
};
