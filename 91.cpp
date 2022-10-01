class Solution {
public:
    int ways(int ind, string &s, vector<int> &dp)
    {
        if(ind==s.size())
        {
            return 1;
        }
        
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        
        int two = 0;
        int one = 0;
        if(s[ind]!='0' && ind+1<s.size() && s.substr(ind, 2)>="10" && s.substr(ind, 2)<="26")
        {
            two = ways(ind+2, s, dp);
        }
        if(s[ind]!='0')
        {
            one = ways(ind+1, s, dp);
        }
        
        return dp[ind] = one+two;
        
    }
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return ways(0, s, dp);
    }
};
