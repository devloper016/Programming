class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> v;
        int n = profit.size(),m=worker.size();
        for(int i=0;i<n;i++){
            v.push_back({difficulty[i],profit[i]});
        }
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        int mx=0;
        int j=0;
        int ans=0;
        for(int i=0;i<m;i++){
            while(worker[i]>=v[j].first && j<n){
                mx = max(mx,v[j].second);
                j++;
            }
            ans+=mx;
        }
        return ans;
    }
};
