class Solution {
public:
    void dfs(TreeNode* root,string path,string &s){
        if(root==NULL) return;

        path+=char(root->val + 'a');
        if(!root->left && !root->right){
            reverse(path.begin(),path.end());
            if(path<s || s.empty()){
                s = path;
            }
            reverse(path.begin(),path.end());
        }
        dfs(root->left,path,s);
        dfs(root->right,path,s);
    }
    string smallestFromLeaf(TreeNode* root) {
        if(root==NULL) return "";
        string s="";
        dfs(root,"",s);
        return s;
    }
};
