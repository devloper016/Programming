class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string s : words){
            if(s.size() != pattern.size()) continue;
            vector<char> ar(26,NULL);
            unordered_map<char,int> mp;
            bool flag = true;
            
            for(int j=0;j<s.size();j++){
                char a = s[j];
                char b = pattern[j];
                
                if((ar[a-'a']==NULL && mp.count(b)==0)|| ar[a-'a']==b){
                    ar[a-'a'] = b;
                    mp[b] = 1;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
