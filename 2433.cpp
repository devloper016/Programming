/*
 * @lc app=leetcode id=2433 lang=cpp
 *
 * [2433] Find The Original Array of Prefix Xor
 */

// @lc code=start
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        ans[0] = pref[0];
        for(int i=1;i<pref.size();i++){
            ans[i] = pref[i]^pref[i-1];
        }
        return ans;
    }
};
// @lc code=end

