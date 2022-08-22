class Solution {
public:
    long long count=0;
    void sol(TreeNode *root, long long targetSum){
        if(root==nullptr) return;
        if(root->val==targetSum) count++;
        sol(root->left,targetSum-root->val);
        sol(root->right,targetSum-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return 0;
        sol(root,targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right,targetSum);
        return count;
    }
};
