class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n = nums1.size(),m=nums2.size();
        int ans = INT_MAX;
        while(i<n &&j<m){
            if(nums1[i]==nums2[j]){
                ans = min(ans,nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return (ans==INT_MAX?-1:ans);
    }
};
