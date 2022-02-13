class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count = INT_MIN,sum =0;
        for(int i=0;i<nums.size();++i){
            sum = sum + nums[i];
            count = max(sum,count);
            sum = max(sum,0);
        }
        return count;
    }
};
