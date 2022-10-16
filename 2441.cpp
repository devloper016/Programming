class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])==st.end()) st.insert(nums[i]);
        }
        int ans= -1;
        for(auto &it: st){
            if(st.find(-it)!=st.end()){
                ans  = max(ans,it);
            }
        }
        return ans;
    }
};
