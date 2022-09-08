class Solution {
public:
    void fun(vector<int> &arr,int target,vector<vector<int>>&ans,int i,vector<int>&temp){
        
        if(i==arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(arr[i]<=target){
            temp.push_back(arr[i]);
            fun(arr,target-arr[i],ans,i,temp);
            temp.pop_back();
        }
        fun(arr,target,ans,i+1,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        fun(candidates,target,ans,0,temp);
        return ans;
    }
};
