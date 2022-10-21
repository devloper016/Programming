class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int i=0,j=0;
        set<int> st;
        for(int j=0;j<nums.size();j++){
                auto upper = st.upper_bound(nums[j]);
            if(upper!=st.end() && abs((long)nums[j]-*upper)<=t) return true;
            
            auto lower = st.lower_bound(nums[j]);
            if(lower != st.end() && nums[j]==*lower) return true;
            if(lower != st.begin() && abs((long)nums[j]- *(--lower))<=t) return true;
            
                if(j-k>=0){
                    st.erase(nums[j-k]);
                }
                if(k>=1){
                    st.insert(nums[j]);
                }
    }
        return false;
}
};
