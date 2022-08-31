class Solution {
public:
    int numSquares(int n) {
        int ans = sqrt(n);
        vector<int> nums;
        for(int i = 1; i < ans+1; i++)
            nums.push_back(i*i);
        vector<int> dp(n+1, INT_MAX); dp[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(auto elem : nums)
            {
                if(elem > i)
                    break;
                if(dp[i-elem] != INT_MAX)
                    dp[i] = min(dp[i], dp[i-elem] + 1);
            }
        }
        return (dp[n] == INT_MAX) ? -1: dp[n];
    }
};
