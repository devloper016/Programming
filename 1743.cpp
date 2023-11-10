class Solution {
public:
    void dfs(int r,vector<int> &ans,unordered_map<int,vector<int>>&mp,unordered_map<int,bool> &vis){
        vis[r] = true;
        for(auto it : mp[r]){
            if(vis.find(it)==vis.end()){
                dfs(it,ans,mp,vis);
            }
        }
        ans.push_back(r);
    }
    vector<int> restoreArray(vector<vector<int>>& a) {
        int n = a.size();
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[a[i][0]].push_back(a[i][1]);
            mp[a[i][1]].push_back(a[i][0]);
        }
        vector<int> ans;
        int r=0;
        for(auto it: mp){
            if(it.second.size()==1){
                r=it.first;
                break;
            }
        }
        unordered_map<int,bool> vis;
        dfs(r,ans,mp,vis);
        return ans;
    }
};
