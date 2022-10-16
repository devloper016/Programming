class Solution {
public:
    int rev(int n){
        int res =0;
        while(n){
            res = res*10 + n%10;
            n= n / 10;
        }
        return res;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
            int n = rev(nums[i]);
            st.insert(n);
        }
        return st.size();
    }
};
