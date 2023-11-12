class Solution {
public:
    bool isstrong(int x,int y){
        if(abs(x-y)<=min(x,y)) return true;
        return false;
    }
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int  mx = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isstrong(nums[i],nums[j])){
                    if((nums[i]^nums[j])>mx){
                        mx = nums[i]^nums[j];
                    }
                }
            }
        }
        return mx;
    }
};
