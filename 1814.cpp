class Solution {
public:
    int mod = 1e9+7;
    int re(int n){
        string s = to_string(n);
        reverse(s.begin(),s.end());
        int nn = stoi(s);
        return nn;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> dif(n,0);
        for(int i=0;i<n;i++){
            dif[i] = nums[i] - re(nums[i]);
        }
        
        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            ans = (ans+mp[dif[i]])%mod;
            mp[dif[i]]++;
        }
        return ans;
    }
};
