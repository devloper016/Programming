class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums) {
            m[i]++;
        }
        int ans = 0;
        for(auto i:m) {
            if(m.find(i.first-1) != m.end()) {
                ans = max(ans, m[i.first-1] + i.second);
            }
            if(m.find(i.first+1) != m.end()) {
                ans = max(ans, m[i.first+1] + i.second);
            }
        }
        
        return ans;
    }
};
