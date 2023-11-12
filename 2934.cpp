class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0, res = 0; 
        int n = nums1.size();  
        for(int i=0; i<n-1; i++){ 
            if(nums1[i] <= nums1[n-1] && nums2[i] <= nums2[n-1])continue; 
            else if(nums1[i] <= nums2[n-1] && nums2[i] <= nums1[n-1]){ 
                ans++; 
            } 
            else{ 
                ans = INT_MAX; 
                break; 
            } 
        }   
        res = 1; 
        swap(nums1[n-1], nums2[n-1]); 
        for(int i=0; i<n-1; i++){ 
            if(nums1[i] <= nums1[n-1] && nums2[i] <= nums2[n-1])continue; 
            else if(nums1[i] <= nums2[n-1] && nums2[i] <= nums1[n-1]){ 
                res++; 
            } 
            else{ 
                res = INT_MAX; 
                break; 
            } 
        }  
        int result = min(res,ans); 
        if(result == INT_MAX)return -1; 
        return result;  
    }
};
