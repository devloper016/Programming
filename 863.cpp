/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void find_parents(TreeNode*root,unordered_map<TreeNode*,TreeNode*> &mp){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if(t->left){
                q.push(t->left);
                mp[t->left] = t;
            }
            if(t->right){
                q.push(t->right);
                mp[t->right] = t;
            }
        }
        return;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* ,TreeNode*> mp;
        unordered_map<TreeNode*,bool> vis;
        find_parents(root,mp);
        queue<TreeNode*> q;
        vis[target] = true;
        q.push(target);
        while(k--){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* t = q.front();
                q.pop();
                if(t->left && !vis[t->left]){
                    q.push(t->left);
                    vis[t->left]=true;
                }
                if(t->right && !vis[t->right]){
                    q.push(t->right);
                    vis[t->right]=true;
                }
                if(mp[t] && !vis[mp[t]]){
                    q.push(mp[t]);
                    vis[mp[t]] = true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};
