class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        long sum=0;
        int ans= 0;
        for(int i=0;i<n;i++){
            long t = nums[i];
            sum+=t;
            while((i-l+1)*t -sum >k){
                sum -= nums[l];
                l++;
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};
