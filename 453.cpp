class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(auto n : nums) ans += n-nums[0];
        return ans;
    }
};
