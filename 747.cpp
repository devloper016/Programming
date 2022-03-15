class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(nums);
        sort(res.begin(),res.end());
        int d=-1;
        for(int i=0;i<n;i++){
       
        if(res[n-1]!=nums[i] && 2*nums[i] > res[n-1]){
             
            return -1;
        }
         else if(res[n-1]==nums[i]){
            d = i;
        }
        
       
    }
    return d;
}
    
};
