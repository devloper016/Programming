class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int cnt=0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]!=nums[i]) cnt++;
            ans+=cnt;
        }
        return ans;
    }
};
