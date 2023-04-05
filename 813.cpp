class Solution {
public:
    double sol(vector<vector<double>> &dp,vector<int> &nums,int k,int i){
        if(i>=nums.size()) return 0; 
        if(k==0) return INT_MIN;
        
        if(dp[i][k]!= -1) return dp[i][k];
        double mx = INT_MIN,sum=0;
        for(int j=i;j<nums.size();j++){
            sum+= nums[j];
            mx = max(mx,sum/(j-i+1)+sol(dp,nums,k-1,j+1));
        }
        return dp[i][k] = mx;
    }
    double largestSumOfAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<double>> dp(n,vector<double>(k+1,-1));
        return sol(dp,nums,k,0);
    }
};
