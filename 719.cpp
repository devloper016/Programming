class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = nums[n-1]-nums[0];
        while(start<=end){
            int mid = start + (end-start)/2;
            int s=0,e=0,count=0;
            while(e<n){
                while(nums[e]-nums[s]>mid&&s<n) s++;
                count+=(e-s);
                e++;
            }
            if(count>=k) end=mid-1;
            else start = mid+1;
        }
        return start;
    }
};
