class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans(nums.size(),0);
        int countl=0;
        int counts=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) countl++;
             if(nums[i]==pivot) counts++;
        }
        for(int i=countl;i<countl+counts;i++){
            ans[i] = pivot;
        }
        int x = 0,y=counts+countl;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans[x] = nums[i];
                x++;
            }
            else if(nums[i]>pivot){
                ans[y] = nums[i];
                y++;
            }
        }
        return ans;
    }
};
