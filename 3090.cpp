class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans= -1;
        int n = s.size();
        for(int i=0;i<n;i++){
            string tmp = "";
            map<char,int> mp;
            for(int j=i;j<n;j++){
                tmp+=s[j];
                mp[s[j]]++;
                if(mp[s[j]]>2) break;
                int m = tmp.size();
                ans = max(ans,m);
            }
        }
        return ans;
    }
};
