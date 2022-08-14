class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
       
 int sum = 0,n=nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        if(sum<abs(target) || (sum+target)%2==1) return 0;
        
        int s2 = (sum + target)/2;
        //cout<<s2<<endl;
        
        int dp[n+1][s2+1];
        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }
        for(int j=1;j<=s2;j++){
            dp[0][j] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s2;j++){
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][s2];
    }
};
