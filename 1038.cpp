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
    void acc(TreeNode* root,int &s){
        if(root==NULL) return;
        acc(root->left,s);
        s += root->val;
        acc(root->right,s);
        return;
    }
    void dfs(TreeNode* cur,int &lsum,int s){
        if(cur==NULL) return;
        dfs(cur->left,lsum,s);
        int v=cur->val;
        int tmp = s-lsum;
        cur->val = tmp;
        lsum+=v;
        dfs(cur->right,lsum,s);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int s=0;
        acc(root,s);
        // cout<<s;
        int lsum=0;
        dfs(root,lsum,s);
        return root;
    }
};
