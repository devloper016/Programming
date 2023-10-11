class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        unordered_map<int,int> mp;
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> peo(people.begin(),people.end());
        sort(peo.begin(),peo.end());
        sort(flowers.begin(),flowers.end());
        int n = peo.size();
        int m = flowers.size();
        int j=0;
        for(int i=0;i<n;i++){
            while(j<flowers.size() && flowers[j][0]<=peo[i]){
                pq.push(flowers[j][1]);
                j++;
            }
            
            while(!pq.empty() && pq.top()<peo[i]){
                pq.pop();
            }
            
            mp[peo[i]] = pq.size();
        }
        
        vector<int> ans;
        for(auto p:people){
            ans.push_back(mp[p]);
        }
        return ans;
    }
};
