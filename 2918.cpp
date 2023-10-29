class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
       long long s1 = 0, cnt1= 0; 
        for (int it:nums1) { 
            if (it == 0) { 
                cnt1++; 
            } 
            s1+= it; 
        } 
        long long s2=0, cnt2=0; 
        for (int it:nums2) { 
            if (it == 0) { 
                cnt2++; 
            } 
            s2+= it; 
        } 
        if (s1+cnt1<s2+cnt2) { 
            swap(s1,s2);
            swap(cnt1,cnt2);
        } 
        if (s1+cnt1 > s2 && cnt2 == 0) { 
            return -1; 
        } 
        return s1+cnt1; 
    } 
};
