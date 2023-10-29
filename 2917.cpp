class Solution {
public:
    
    int findKOr(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans=0;
        for(int i=31;i>=0;i--){
            int cnt=0;
            int m = 1<<i;
            
            
            for(int j=0;j<n;j++){
                if(nums[j] & m) cnt++;
            }
            
            if(cnt>=k){
                ans|=m;
            }
        }
        return ans;
    }
};
