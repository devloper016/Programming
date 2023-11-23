class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp(heights.begin(),heights.end());
        sort(exp.begin(),exp.end());
        int n = heights.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(exp[i]!=heights[i]) ans++;
        }
        return ans;
    }
};
