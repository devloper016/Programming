class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans=1;
        int n = nums.size();
        int sz=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                sz++;
            }
            else{
                sz=1;
            }
            ans+=sz;
        }
        return ans;
    }
};
