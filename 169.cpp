class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = nums[0];
        int count = 1;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==cand){
                count++;
            }
            else{
                count--;
                if(count==0){
                    cand = nums[i];
                    count=1;
                }
            }
        }
        return cand;
    }
};
