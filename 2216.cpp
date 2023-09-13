class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int i=0;
        int ans=0;
        if(nums.size()==1) return 1;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                ans++;
                i++;
            }
            else{
                i+= 2;
            }
        }
        if(i==nums.size()-1){
            ans++;
        };
        return ans;
    }
};
