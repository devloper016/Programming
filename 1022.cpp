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
    void dfs(TreeNode* root,int &sum,int id){
        if(root==NULL) return;
        id = (id<<1)+root->val;
        if(!root->left && !root->right){
            sum+=id;
            return;
        }
        dfs(root->left,sum,id);
        dfs(root->right,sum,id);
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        int id=0;
        dfs(root,sum,id);
        return sum;
    }
};
