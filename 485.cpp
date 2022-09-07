class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0 ;
        int i=0;
        int n = nums.size();
        int count=0;
        while(i<n){
            if(nums[i]==1){
                count++;
                ans = max(ans,count);
            }
            if(nums[i]==0) count=0;
            i++;
        }
        return ans;
    }
};
