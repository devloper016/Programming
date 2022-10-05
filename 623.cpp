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
    TreeNode* sol(TreeNode* root,int v,int d){
        if(root==NULL) return NULL;
        
        if(d==2){
            TreeNode* leftnode = new TreeNode(v);
            TreeNode* rightnode = new TreeNode(v);
            
            leftnode->left = root->left;
            rightnode->right = root->right;
            root->left = leftnode;
            root->right = rightnode;
            
            return root;
        }
        root->left = sol(root->left,v,d-1);
        root->right = sol(root->right,v,d-1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1){
            TreeNode* node = new TreeNode(v);
            node->left = root;
            return node;
        }
        return sol(root,v,d);
    }
};
