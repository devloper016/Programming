/*
 * @lc app=leetcode id=2432 lang=cpp
 *
 * [2432] The Employee That Worked on the Longest Task
 */

// @lc code=start
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans=logs[0][0];
        int mx=logs[0][1];
        for(int i=1;i<logs.size();i++){
            int tmp = logs[i][1]-logs[i-1][1];
            if(tmp>mx){
                mx = tmp;
                ans = logs[i][0];
            }
            else if(tmp==mx){
             ans = min(logs[i][0],ans);
            }
        }
        return ans;
    }
};

// @lc code=end

