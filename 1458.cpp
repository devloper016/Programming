class Solution {
public:
    int dp[501][501];
    int sol(int i,int j,vector<int> &nums1,vector<int> &nums2){
        if(i==nums1.size() || j==nums2.size()){
            return 0;
        }
        if(dp[i][j]!= -1) return dp[i][j];
        
        int tmp = nums1[i]*nums2[j] + sol(i+1,j+1,nums1,nums2);
        dp[i][j] = max(tmp,max(sol(i+1,j,nums1,nums2),sol(i,j+1,nums1,nums2)));
        
        return dp[i][j];
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        int firstmx = INT_MIN;
        int firstmn = INT_MAX;
        int secondmx= INT_MIN;
        int secondmn = INT_MAX;
        
        for(auto i : nums1){
            firstmn = min(firstmn,i);
            firstmx = max(firstmx,i);
        }
        for(auto i: nums2){
            secondmn = min(secondmn,i);
            secondmx= max(secondmx,i);
        }
        
        if(firstmx <0 && secondmn>0){
            return firstmx*secondmn;
        }
        
        if(firstmn>0 && secondmx<0){
            return firstmn*secondmx;
        }
        
        return sol(0,0,nums1,nums2);
    }
};
