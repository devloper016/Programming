class Solution {
public:
    int sol(int i,int xsum,vector<int> &nums){
        int n =nums.size();
        if(i==n) return xsum;
        int t = sol(i+1,xsum^nums[i],nums);
        int nt = sol(i+1,xsum,nums);
        return t+nt;
    }
    int subsetXORSum(vector<int>& nums) {
        return sol(0,0,nums);
    }
};
