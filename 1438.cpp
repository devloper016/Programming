class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int i=0,j=0;
        int n = nums.size();
        int ans=INT_MIN;
        multiset<int> st;
        while(j<n){
            st.insert(nums[j]);
            if(*st.rbegin()- *st.begin()<=k){
                ans = max(ans,j-i+1);
                j++;
            }
            else if(*st.rbegin()-*st.begin() > k){
                while(*st.rbegin()-*st.begin()>k && i<=j){
                    st.erase(st.find(nums[i]));
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};
