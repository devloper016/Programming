class Solution {
public:
    void laude(TreeNode* root,int &count,int mx){
        if(root==NULL) return;
        
        if(mx<=root->val){
            count++;
            mx = root->val;
        }
        laude(root->left,count,mx);
        laude(root->right,count,mx);
    }
    int goodNodes(TreeNode* root) {
        int count =0;
        laude(root,count,root->val);
        return count;
    }
};
