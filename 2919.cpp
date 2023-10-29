class Solution {
public:
    long long sol(vector<int> &nums,int k,int n){
     vector<long long> t(n+4,0);
     for(int i=n-1;i>=0;i--){
        long long tmp= LLONG_MAX;
        for(int j=i+1;j<=i+3;j++){
            tmp = min(tmp,t[j]);
        }
        t[i] = tmp+max((long long)k-nums[i],(long long)0);
        }
        return min(t[0],min(t[1],t[2]));
    }
    long long minIncrementOperations(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans=sol(nums,k,n);
        return ans;
    }
};
