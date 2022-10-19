class Solution {
public:
    struct compartor{
    bool operator()(pair<int,string> &a,pair<int,string> &b) {
        if(a.first==b.first) return a.second<b.second;
        else return a.first>b.first;
    }
};
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans; 
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,compartor> pq;
        for(auto it:mp){
            pq.push({it.second, it.first});
            if(pq.size() > k) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
