class Solution {
public:
    int longestIdealString(string s, int k) {
        int dp[27] = {0};
        int n = s.length();
        for(int i=0;i<n;i++){
            char c = s[i];
            int m = c-'a';
            int mx = INT_MIN;
            
            int l = max(m-k,0);
            int r = min(m+k,26);
            for(int j=l;j<=r;j++){
                mx = max(mx,dp[j]);
            }
            dp[m] = mx+1;
        }
        int ans=-1;
        for(int i=0;i<26;i++){
            if(dp[i]>ans){
                ans = dp[i];
            }
        }
        return ans;
    }
};
