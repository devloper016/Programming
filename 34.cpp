class Solution {
public:
    int first(vector<int>& nums, int target){
        int s=0,e=nums.size()-1,mid;
        while(s<=e){
            mid = s +(e-s)/2;
            if(nums[mid]<target){
                s = mid+1;}
            else if(nums[mid]>target){
                e =mid-1;
            }
            else if(s<=mid-1 && target == nums[mid-1]){
                e = mid-1;
            }
            else{
                return mid;
            }
    }
      return -1;  
}        
    int second(vector<int>& nums, int target){
        int s=0,e=nums.size()-1,mid;
        while(s<=e){
            mid = s +(e-s)/2;
            if(nums[mid]>target){
                e = mid-1;}
            else if(nums[mid]<target){
                s =mid+1;
            }
            else if(e>=mid+1 && target == nums[mid+1]){
                s = mid+1;
            }
            else{
                return mid;
            }
    }
        return -1;
}        
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v(2);
      v[0] = first(nums,target);
      v[1] = second(nums,target);  
      return v;  
    }
};    
