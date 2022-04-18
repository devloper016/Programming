class Solution {
public:
    int height(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }
        int a = height(root->left) + height(root->right);
        int b = diameterOfBinaryTree(root->left);
        int c = diameterOfBinaryTree(root->right);
        
        return max(a,max(b,c));
    }
};
