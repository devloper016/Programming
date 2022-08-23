class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        map<vector<int>,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            vector<int> v;
            int z = k;
            for(int j=i;j<n;j++){
                if(z==0 && nums[j]%p==0) break;
                if(nums[j]%p==0){
                    z--;
                }
                v.push_back(nums[j]);
                mp[v]++;
            }
        }
        return mp.size();
    }
};
