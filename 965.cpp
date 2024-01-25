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
    void dfs(TreeNode* root,int num,int &cnt){
        if(root==NULL) return ;
        dfs(root->left,num,cnt);
        if(root->val!=num) cnt++;
        dfs(root->right,num,cnt);
    }
    bool isUnivalTree(TreeNode* root) {
        int num = root->val;
        int cnt=1;
        dfs(root,num,cnt);
        return cnt==1;
    }
};
