class Solution {
public:
    int sol(vector<vector<int>>&dp,vector<int> &nums,vector<int> &multipliers,int l,int r,int i){
        if(i==multipliers.size()) return 0;
        if(dp[i][l]!= INT_MIN){
            return dp[i][l];
        }
        int left = multipliers[i]*nums[l]+sol(dp,nums,multipliers,l+1,r,i+1);
        int right = multipliers[i]*nums[r]+sol(dp,nums,multipliers,l,r-1,i+1);
        return dp[i][l] = max(left,right);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
        vector<vector<int>> dp(m+1,vector<int>(m+1,INT_MIN));
        return sol(dp,nums,multipliers,0,n-1,0);
    }
};
