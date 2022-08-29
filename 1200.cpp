class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int mn = INT_MAX;
        for(int i=1;i<arr.size();i++){
            mn = min(mn,abs(arr[i-1]-arr[i]));
        }
        
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i-1]-arr[i])==mn){
                vector<int>tmp;
                tmp.push_back(arr[i-1]);
                tmp.push_back(arr[i]);
                ans.push_back(tmp);
                tmp.clear();
            }
        }
        return ans;
    }
};
