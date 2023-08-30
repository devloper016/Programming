class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans=0;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]) continue;
            long long nums_elements= ceil((nums[i]+nums[i+1]- 1LL)/nums[i+1]);
            ans += nums_elements-1;
            nums[i] = nums[i]/nums_elements;
        }
        return ans;
    }
};
