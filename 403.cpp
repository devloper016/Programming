class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool odd= false;
        int ans=0;
        for(auto i : mp){
            if(i.second%2==1){
                odd = true;
            }
            ans += (i.second/2) * 2;
        }
        if(odd){
            ans++;
        }
        return ans;
    }
};
