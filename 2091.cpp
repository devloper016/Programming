class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=INT_MAX, mx = INT_MIN;
        int n = nums.size();
        int s=0,e=n-1;
        int id=0,ind=0;
        for(int i=0;i<n;i++){
            if(mx<nums[i]){
                 mx = nums[i];
                 id = i;
            }
            if(mn>nums[i]){
                 mn = nums[i];
                 ind = i;
            }
        }
        int dis1 = max(ind+1,id+1);
        int dis2 = max(e-id+1,e-ind+1);
        int dis3 = min(ind+1,id+1)+min(e-id+1,e-ind+1);
        return min(dis1,min(dis2,dis3));
    }
};
