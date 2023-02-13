class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        // int cur = INT_MAX;
        for(int i=0;i<n;i++){
            int curr = nums[i];
            for(int j=i;j<n;j++){
                curr = gcd(curr,nums[j]);
                if(curr==k) count++;
            }
        }
        return count;
    }
};
