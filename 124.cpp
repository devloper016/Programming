class Solution {
public:
    int sol(TreeNode* root,int &ans){
        if(root==nullptr) return 0;
        
        int l = sol(root->left,ans);
        int r = sol(root->right,ans);
        
        int temp = max(root->val,max(l,r)+root->val);
        int res = max(temp,root->val+l+r);
        ans = max(ans,res);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        sol(root,ans);
        return ans;
    }
};
