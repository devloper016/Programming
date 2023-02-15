class Solution {
public:
    int sol(vector<int> &arr,map<pair<int,int>,int>&mp,int left,int right,vector<vector<int>> &dp){
        if(left==right) return 0;
        
        if(dp[left][right]!= -1) return dp[left][right];
        int ans = INT_MAX;
        for(int i=left;i<right;i++){
            ans = min(ans,mp[{left,i}]*mp[{i+1,right}]+sol(arr,mp,left,i,dp)+sol(arr,mp,i+1,right,dp));
        }
        return dp[left][right]=ans;
    }
    int mctFromLeafValues(vector<int>& arr) {
        map<pair<int,int>,int> mp;
        int n = arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i=0;i<arr.size();i++){
            mp[{i,i}] = arr[i];
            for(int j=i+1;j<arr.size();j++){
                mp[{i,j}] = max(mp[{i,j-1}],arr[j]);
            }
        }
        return sol(arr,mp,0,arr.size()-1,dp);
    }
};
