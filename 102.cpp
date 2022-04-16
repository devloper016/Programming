class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*> q; 
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
            if(f==NULL){
                ans.push_back(temp);
                temp.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                temp.push_back(f->val);
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            }
        }
        return ans;
    }
};
