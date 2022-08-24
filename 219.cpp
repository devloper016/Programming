class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                if(abs(mp[nums[i]]-i)<=k) return true;
            }
            mp[nums[i]] = i;
        }
        return false;
  }      
};
