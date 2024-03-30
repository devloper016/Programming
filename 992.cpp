class Solution {
public:
    int sol(vector<int> nums,int k){
        int i=0,j=0,n=nums.size();
        int res=0;
        unordered_map<int,int> mp;
        while(j<n){
            mp[nums[j]]++;
            while(i<=j && mp.size()>k){
                if(--mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
            res+=(j-i+1);
            j++;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return sol(nums,k)-sol(nums,k-1);
    }
};
