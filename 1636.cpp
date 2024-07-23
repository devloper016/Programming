class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        map<int,vector<int>> m;
        for(auto it: mp){
            int z = it.second;
            for(int i=0;i<z;i++){
                m[it.second].push_back(it.first);
            }
        }
        vector<int> ans;
        for(auto it : m){
            int z = it.second.size();
            for(int i=z-1;i>=0;i--){
                ans.push_back(it.second[i]);
            }
        }
        return ans;
    }
};
