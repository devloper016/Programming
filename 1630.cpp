class Solution {
public:
    bool isArithmatic(vector<int> res){
        if(res.size()<2) return false;
        sort(res.begin(),res.end());
        int diff = res[1] -res[0];
        for(int i=1;i<res.size();i++){
            if((res[i] - res[i-1]) != diff){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            vector<int> res;
            for(int j=l[i];j<=r[i];j++){
                res.push_back(nums[j]);
            }
            if(isArithmatic(res)){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};
