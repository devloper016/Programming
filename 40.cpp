class Solution {
public:
    void pussy(vector<int> &arr,vector<vector<int>> &ans,vector<int>&temp,int target,int ind){
        
            if(target==0){
                ans.push_back(temp);
                return;
            }
        for(int i=ind;i<arr.size();i++){
           if(i > ind && arr[i-1]==arr[i]) continue; 
            if(arr[i]> target) break;
            temp.push_back(arr[i]);
            pussy(arr,ans,temp,target-arr[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        pussy(candidates,ans,temp,target,0);
        return ans;
    }
};
