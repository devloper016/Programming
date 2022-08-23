class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) nums[i] = 0;
            else nums[i] = 1;
        }
        int sum=0,count=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum==k){
                count++;
            }
            if(mp.find(sum-k)!=mp.end()){
               count+=mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
};
