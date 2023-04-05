class Solution {
public:
    bool ispos(vector<int> &nums,long long target){
        vector<long long> num(nums.begin(),nums.end());
        for(int i = num.size()-1; i>0; i--){
            if(num[i]>target){
                num[i-1]+=abs(target-num[i]);
            }
        }
        return num[0]<=target;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int s=0, e = *max_element(nums.begin(),nums.end()),ans=0;
        
        while(s<=e){
            long long mid = s+(e-s)/2;
            if(ispos(nums,mid)){
                ans = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        return ans;
    }
};
