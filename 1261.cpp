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
class FindElements {
public:
   vector<int> v;
    void dfs(TreeNode* root){
        if(root==NULL) return;
        if(root->val== -1){
            root->val=0;
        }
        if(root->left!=NULL) root->left->val=(root->val)*2+1;
            if(root->right!=NULL) root->right->val=(root->val)*2+2;
            dfs(root->left);
            dfs(root->right);
    }
    void dfs2(TreeNode* root){
        if(root==NULL) return;
        dfs2(root->left);
        v.push_back(root->val);
        dfs2(root->right);
    }
    FindElements(TreeNode* root) {
        dfs(root);
        dfs2(root);
    }
    
    bool find(int target) {
        for(int i=0;i<v.size();i++){
            if(v[i]==target) return true;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
