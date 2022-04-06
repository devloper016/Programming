class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int ans=0, mod = 1e9+7;
        for(int i=0;i<arr.size();i++){
            ans += mp[target-arr[i]];
            ans%=mod;
            for(int j=0;j<i;j++){
                mp[arr[i]+arr[j]]++;
            }
        }
        return ans;
    }
};
