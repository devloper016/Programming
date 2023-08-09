class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
       sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0,j=nums[n-1]-nums[0];
        while(i<j){
            int m = i+(j-i)/2;
            int cnt=0;
            for(int k=1;k<n;k++){
                if(nums[k]-nums[k-1]<= m){
                    cnt++;
                    k+=1;
                }
            }
            if(cnt<p){
                i = m+1;
            }
            else{
                j = m;
            }
        }
        return i;
    }
};
