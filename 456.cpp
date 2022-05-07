class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0];
        stack<pair<int,int>> st;
        for(int i=1;i<n;i++){
            while(!st.empty() && nums[i]>=st.top().first){
                st.pop();
            }
            if(!st.empty() && nums[i]>st.top().second) return true;
            st.push({nums[i],mini});
            mini = min(nums[i],mini);
        }
        return false;
    }
};
