class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        for(auto si:s){
            mp[si]++;
        }
        for(auto m:mp){
            pq.push({m.second,m.first});
        }
        string ans="";
        while(pq.size()>1){
            pair<int,char> fi = pq.top();
            pq.pop();
            pair<int,char> se = pq.top();
            pq.pop();
            ans+=fi.second;
            ans+=se.second;
            fi.first -= 1;
            se.first -= 1;
            if(fi.first>0) pq.push(fi);
            if(se.first>0) pq.push(se);
        }
        if(!pq.empty()){
            if(pq.top().first>1) return "";
            else ans+=pq.top().second;
        }
        return ans;
    }
};
