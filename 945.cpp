class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                ++count;
                ++nums[i];
            }
            else if(nums[i-1]>nums[i]){
                int l = nums[i-1]-nums[i];
                count+= l+1;
                nums[i]+= l+1;
            }
        }
        return count;
    }
};
