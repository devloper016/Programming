class Solution {
public:
    string greatestLetter(string s) {
        unordered_map<char,int> mp;
        string ans = "";
        for(int i=0;i<s.size();i++){
            mp[s[i]-32]=1;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1) mp[s[i]]=2;
        }
        for(auto i:mp){
            if(i.second==2){
                if(ans.size()==0){
                    ans += i.first;
                }
                else{
                    if(ans[0]<i.first){
                        ans[0] = i.first;
                    }
                }
            }
        }
        return ans;
    }
};
