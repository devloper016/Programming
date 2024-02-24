class Solution {
public:
   static bool comp(vector<int> &a,vector<int> &b){
       return a[2]<b[2];
   }
   void dfs(int node,map<int,vector<int>> &mp,vector<int> &vis,map<int,int> &pathvis,int par){
       vis[node] = 1;
       pathvis[node] = 1;
       for(auto it : mp[node]){
           if(it!=par && !pathvis[it]){
               dfs(it,mp,vis,pathvis,node);
           }
       }
   }
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<int> vis(n,0);
        vis[0] =1;
        vis[firstPerson] = 1;
        sort(meetings.begin(),meetings.end(),comp);
        int m = meetings.size();
        int i=0,j=0;
        while(i<m){
            j=i;
            map<int,vector<int>> mp;
            map<int,int> pathvis;
            while(j<m && meetings[j][2]==meetings[i][2]){
                mp[meetings[j][0]].push_back(meetings[j][1]);
                mp[meetings[j][1]].push_back(meetings[j][0]);
                j++;
            }
            for(auto it: mp){
                if(vis[it.first] && pathvis.find(it.first)==pathvis.end()){
                    dfs(it.first,mp,vis,pathvis,-1);
                }
            }
            i=j;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(vis[i]!= 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
