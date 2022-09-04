class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> ps(arr.size());
        ps[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            ps[i] = ps[i-1]^arr[i];
        }
        for(int i=0;i<queries.size();i++){
            int m = queries[i][0];
            int n = queries[i][1];
            if(m!=0){
                ans.push_back(ps[m-1]^ps[n]);
            }
            else
            ans.push_back(ps[n]);
        }
        return ans;
    }
};
