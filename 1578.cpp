class Solution {
public:
    int minCost(string &colors, vector<int>& neededTime) {
        int n = colors.size();
        int ans = 0, totalCost = neededTime[0], mxCost = neededTime[0];
        for(int i=1; i<n; i++) {
            if(colors[i] == colors[i-1]) {
                totalCost += neededTime[i];
                mxCost = max(mxCost, neededTime[i]); 
            } else {
                ans += totalCost - mxCost;
                totalCost = neededTime[i], mxCost = neededTime[i];
            }
        }
        ans += totalCost - mxCost;
        return ans;
    }
};
