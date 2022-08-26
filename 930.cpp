class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return fun(nums,goal)-fun(nums,goal-1);
    }
    int fun(vector<int>& nums,int goal)
    {
        int res=0;
        int sum=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>goal && j<nums.size())
            {
                sum-=nums[j++];
            }
            if(i>=j)
            res+=i-j+1;
        }
        return res;
    }
};
