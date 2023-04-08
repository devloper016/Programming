class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        unordered_map<int,bool>mp;
        int n = nums.size();
        while(n--){
            auto t = pq.top();
            pq.pop();
            int val = t.first;
            int id = t.second;
            if(mp.find(id)==mp.end()){
             ans+= val;
            mp[id] = 1;
            mp[id-1] = 1;
            mp[id+1] = 1;
            } 
        }
        return ans;
    }
};
