class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
      unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                mp[nums[i]*nums[j]]++;
            }
        }
        for(auto i : mp){
            if(i.second>1) ans+= (i.second-1)*(i.second)*4;
        }
        return ans;
    }
};
