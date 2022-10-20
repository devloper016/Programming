class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        int i=0,j=9;
        unordered_map<string,int> mp;
        while(j<s.size()){
            mp[s.substr(i,j-i+1)]++;
            i++;
            j++;
        }
        for(auto it:mp){
            if(it.second>1) ans.push_back(it.first);
        }
        return ans;
    }
};
