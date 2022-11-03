class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        unordered_map<char,int> mp;
        for(auto c:s){
            mp[c]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second%2==1){
                count++;
            }
            if(count>k) return false;
        }
        cout<<count;
        return true;
    }
};
