class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,left =0;
        for(auto it : nums) sum += it;
        for(int i=0;i<nums.size();i++){
            if(left == (sum-nums[i]-left)) return i;
            left += nums[i];
        }
        return -1;
    }
};
