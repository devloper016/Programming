class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> ans;
        
        while(!mp.empty()){
            vector<int> tmp;
            vector<int> zero;
            for(auto it: mp){
                if(it.second>0){
                    tmp.push_back(it.first);
                    mp[it.first]--;
                }
                if(mp[it.first]==0) zero.push_back(it.first);
            }
            ans.push_back(tmp);
            for(auto i : zero){
                mp.erase(i);
            }
        }
        
        return ans;
    }
};
