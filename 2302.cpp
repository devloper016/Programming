class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long count=0;
        long long sum=0;
        int i=0,j=0;
        while(j<nums.size()){
            sum += nums[j];
            long long condom = sum*(j-i+1);
            if(condom>=k){
                while(condom>=k){
                sum -= nums[i];
                i++;
                condom = sum*(j-i+1);
                }
            }
            count += j-i+1;
                j++;
        }
        return count;
    }
};
