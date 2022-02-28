class Solution {
public:
    int cont(vector<int> nums,int x){
        int count =0;
            for(int i=0;i<nums.size();i++){
            if(nums[i]>=x){
                count++;
            }
            }
        return count;
        }
    int specialArray(vector<int>& nums) {
        int s=0 , e= 1000,mid;
        while(s<=e){
            mid = s + (e-s)/2;
            int co = cont(nums,mid);
            if(mid==co) return mid;
            else if(mid>co) e =mid-1;
            else s = mid+1;
        }
        return -1;
    }
};
