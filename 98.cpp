class Solution {
public:
    bool helper(TreeNode* root,long long maxv,long long minv){
        if(root==NULL) return true;
        
        bool left= helper(root->left,root->val,minv);
        bool right = helper(root->right,maxv,root->val);
        
        if(right&&left&&root->val > minv && root->val<maxv) return true;
        else return false;
        
    }
    bool isValidBST(TreeNode* root) {
        long long maxv = 10000000000;
        long long minv = -10000000000;
        return helper(root,maxv,minv);
    }
};
