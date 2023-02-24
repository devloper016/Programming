class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<long long> pq;
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                pq.push(nums[i]);
                mn = min(mn,nums[i]);
            }
            else{
                pq.push(nums[i]*2);
                mn = min(mn,nums[i]*2);
            }
        }
        int ans = INT_MAX;
        while(!pq.empty()){
            int front = pq.top();
            pq.pop();
            ans = min(ans,front-mn);
            if(front%2!=0) break;
            mn = min(mn,front/2);
            pq.push(front/2);
        }
        return ans;
    }
};
