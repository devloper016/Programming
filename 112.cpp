/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void sol(TreeNode* root,int targetSum,int x,bool &ans){
        if(!root) return;
        x += root->val;
        if(x==targetSum && !root->left && !root->right) ans= true;
        sol(root->left,targetSum,x,ans);
        sol(root->right,targetSum,x,ans);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        bool ans = false;
        sol(root,targetSum,0,ans);
        
        return ans;
    }
};
