class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int id = abs(nums[i]) - 1;
            if(nums[id]>0){
                nums[id]*= -1;
            }
            else{
                res.push_back(abs(nums[i]));
            }
        }
        return res;
    }
};
