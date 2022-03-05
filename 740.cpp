class Solution {
public:
        int dp[10001];
    int h(vector<int>& arr, int ind){
        if(ind>=arr.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = max(arr[ind]+h(arr,ind+2),h(arr,ind+1));
    }
    int deleteAndEarn(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        vector<int> a(10001,0);
        for(auto num : nums) a[num] += num;
        return h(a,0);
    }
};
