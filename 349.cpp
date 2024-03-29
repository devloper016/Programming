class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            
            int s=0 , e= nums2.size()-1,mid=0;
            while(s<=e){
                mid = s +(e-s)/2;
                if(nums2[mid]==nums1[i]){
                 if(find(res.begin(),res.end(),nums2[mid])!=res.end()) {
                     break;}
                 res.push_back(nums2[mid]);
                 break;
                }
                else if(nums2[mid]>nums1[i]) e = mid-1;
                else{
                    s = mid+1;
                }
            }
        }
        return res;
    }
};
