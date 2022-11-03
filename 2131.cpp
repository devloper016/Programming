class Solution {
public:
    string reveresed(string s){
        string t = s;
        reverse(t.begin(),t.end());
        return t;
    }
    int longestPalindrome(vector<string>& words) {
       unordered_map<string,int> mp;
        for(auto word:words){
            mp[word]++;
        }
        int ans=0,mid=0;
        for(auto [s,f]:mp){
            string rev = reveresed(s);
            if(s!=rev){
                if(mp.count(rev)){
                    ans += min(mp[s],mp[rev]);
                }
            }
            else{
               ans += f;
                if(f&1){
                    ans -= 1;
                    mid=1;
                }
            }
        }
        ans += mid;
        return 2*ans;
    }
};
