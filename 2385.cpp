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
class Solution {
public:
    TreeNode* find_parent(TreeNode* root,int start,unordered_map<TreeNode*,TreeNode*> &mp){
        TreeNode* target = NULL;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* t = q.front();
            q.pop();
            if(t->left){
                q.push(t->left);
                mp[t->left] = t;
            }
            if(t->val == start) target = t;
            
            if(t->right){
                q.push(t->right);
                mp[t->right] = t;
            }
        }
        return target;
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*> mp;
        unordered_map<TreeNode*,bool> vis;
        
        TreeNode* target = find_parent(root,start,mp);
        vector<int> dis;
        queue<TreeNode*> q;
        q.push(target);
        vis[target] = true;
        cout<<target->val<<endl;
        int k=0;
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* t = q.front();
                q.pop();
                
                if(t->left && !vis[t->left]){
                    q.push(t->left);
                    vis[t->left] = true;
                }
                
                if(t->right && !vis[t->right]){
                    q.push(t->right);
                    vis[t->right] = true;
                }
                
                if(mp[t] && !vis[mp[t]]){
                    q.push(mp[t]);
                    vis[mp[t]]=true;
                }
            }
            k++;
        }
        return k-1;
    }
};
