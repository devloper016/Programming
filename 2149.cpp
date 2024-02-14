class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        vector<int> ans;
        bool flag=true;
        int id=0,ind=0;
        for(int i=0;i<n;i++){
            if(flag){
                ans.push_back(pos[id]);
                id++;
                flag=false;
            }
            else{
                ans.push_back(neg[ind]);
                ind++;
                flag=true;
            }
        }
        return ans;
    }
};
