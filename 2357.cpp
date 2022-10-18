class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        int mn = 0;
        for(int i=0;i<n;i++){
            if(nums[i]-mn==0) continue;
            else{
                mn += nums[i]-mn;
                count++;
            }
        }
        return count;
    }
};
