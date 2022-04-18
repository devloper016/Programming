class Solution {
public:
    void traverse(TreeNode*root, set<int>&s){
        if(root==NULL) return;
        s.insert(root->val);
        traverse(root->left,s);
        traverse(root->right,s);
    }
    int kthSmallest(TreeNode* root, int k) {
        set<int> s; 
       traverse(root,s);
        for(auto res : s){
            k--;
            if(!k) return res;
        }
        return 0;
      }
};
