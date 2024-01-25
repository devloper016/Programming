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
    void dfs(TreeNode* root,int &s){
        if(root==NULL) return;
        dfs(root->left,s);
        if((root->val)%2==0){
            if(root->left!=NULL){
                if(root->left->left != NULL) s+=root->left->left->val;
                if(root->left->right!= NULL) s+=root->left->right->val;
            }
            if(root->right!=NULL){
                if(root->right->left!=NULL)  s+=root->right->left->val;
                if(root->right->right!= NULL) s+=root->right->right->val;
            }
        }
        dfs(root->right,s);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int s=0;
        dfs(root,s);
        return s;
    }
};
