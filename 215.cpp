class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int z = k-1;
        while(z>0){
            pq.pop();
            z--;
        }
        int res = pq.top();
        return res;
    }
};
