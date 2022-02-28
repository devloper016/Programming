class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
int tSum = accumulate(begin(nums), end(nums), 0);
        int lSum  = 0;
        
        for(int i = 0; i<nums.size(); i++) {
            tSum -= nums[i];
            
            if(lSum == tSum)
                return i;
            
            lSum += nums[i];
        }
        return -1;
    }
};
