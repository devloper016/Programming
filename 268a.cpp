class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v(n);
        int i;
        for(i=0;i<n;i++){
            v[i]=i;
            
            if(v[i]!=nums[i]){
                return i;
            }
        }
        return i;
    }
};
