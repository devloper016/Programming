class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long count=0;
        long long total = n*(n-1)/2;
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i]-i)){
                count+=mp[nums[i]-i];
                mp[nums[i]-i]++;
            }
            else{
                mp[nums[i]-i]=1;
            }
        }
        return total-count;
    }
};
