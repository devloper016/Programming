class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int pre=0,ans=0;
        unordered_map<int,int> mp;
        mp.insert({0,1});
        for(int i=0;i<nums.size();i++){
            pre += nums[i];
            int temp = pre%k;
            if(temp<0) temp = temp+k;
            if(mp.find(temp)!=mp.end()){
                ans += mp[temp];
                mp[temp]++;
            }    
            else mp[temp] =1;
        }
        return ans;
    }
};
