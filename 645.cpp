class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int n=nums.size();
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                res.push_back(nums[i]);        
            }  
            sum=sum+nums[i];
        }
        int total= (n*(n+1))/2;
        int missing = total+res[0]-sum-nums[0];
        res.push_back(missing);
        return res;
 }
};
