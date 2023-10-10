class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int m = nums.size();
        int ans=m;
        vector<int> ne;
        int n = st.size();
        for(int it: st){
            ne.push_back(it);
        }
        
        for(int i=0;i<n;i++){
            int l = ne[i];
            int r = l+m-1;
            
            int id = upper_bound(ne.begin(),ne.end(),r)-ne.begin();
            int count = id-i;
            
            int res = m-count;
            ans = min(ans,res);
        }
        return ans;
    }
};
