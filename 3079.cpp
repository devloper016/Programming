class Solution {
public:
    int en(int num){
        int mx = -1;
        while(num){
            mx = max(mx,num%10);
            num/=10;
        }
        return mx;
    }
    int di(int num){
        int cnt=0;
        while(num){
            num/=10;
            cnt++;
        }
        return cnt;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int e = en(nums[i]);
            int d  = di(nums[i]);
            for(int i=0;i<d;i++){
                ans+=(e*pow(10,i));
            }
        }
        return ans;
    }
};
