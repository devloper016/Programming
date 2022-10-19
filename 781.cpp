/*
 * @lc app=leetcode id=781 lang=cpp
 *
 * [781] Rabbits in Forest
 */

// @lc code=start
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<answers.size();i++){
            mp[answers[i]]++;
        }
        for(auto it:mp){
            int x = it.first;
            int y = it.second;
            ans += (x+1)*ceil((float)y/(x+1));
        }
        return ans;
    }
};
// @lc code=end

