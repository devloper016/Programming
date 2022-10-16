class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int minst =0 ,mxst=0,st=0;
        bool mx=false,mn=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK){
                mx = false;
                mn = false;
                st = i+1;
            }
            if(nums[i]==minK){
                mn = true;
                minst = i;
            }
            if(nums[i]==maxK){
                mx = true;
                mxst = i;
            }
            if(mn && mx){
                ans += (min(mxst,minst)-st+1);
            }
        }
        return ans;
    }
};
