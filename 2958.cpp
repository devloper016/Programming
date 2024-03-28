class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;
        int ans = -1;
        unordered_map<int,int> mp;
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]]>k){
                while(nums[j]!=nums[i]){
                    mp[nums[i]]--;
                    i++;
                }
                mp[nums[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
