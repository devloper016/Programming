/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void dfs(TreeNode* cloned,TreeNode* target,TreeNode* &ans){
        if(cloned==NULL) return;
        dfs(cloned->left,target,ans);
        if(cloned->val==target->val) ans=cloned;
        dfs(cloned->right,target,ans);
        return;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = original;
        dfs(cloned,target,ans);
        return ans;
    }
};
