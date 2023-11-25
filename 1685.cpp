class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> ans(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+nums[i];
        }
        // for(int i=0;i<n;i++) cout<<pre[i]<<" ";
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i] = pre[n-1]-pre[i]-((n-i-1)*nums[i]);
            }
            else{
                ans[i] = (i*nums[i])-pre[i-1]+(pre[n-1]-pre[i]-((n-i-1)*nums[i]));
            }
        }
        return ans;
    }
};
