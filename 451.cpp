class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        vector<pair<int,char>> hp;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            hp.push_back({it.second,it.first});
        }
        sort(hp.begin(),hp.end(),greater<>());
        for(auto it:hp){
            while(it.first>0){
                ans += it.second;
                it.first--;
            }
        }
        return ans;
    }
};
