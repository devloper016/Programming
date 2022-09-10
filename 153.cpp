class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1,ans=INT_MIN;
        if(nums[0]<=nums[e]) return nums[0];
        while(s<=e){
            int mid = s +(e-s)/2;
            
            if(nums[mid+1]<nums[mid]) return nums[mid+1];
            
            if(nums[mid]<nums[mid-1]) return nums[mid];
            
            if(nums[s]<nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};
