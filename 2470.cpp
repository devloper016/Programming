class Solution {
public:

    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
           int cur = nums[i];
            for(int j=i;j<n;j++){
                cur = (cur*nums[j])/gcd(cur,nums[j]);
                if(cur==k) count++;
                if(cur>k) break;
            }
        }
        return count;
    }
};
