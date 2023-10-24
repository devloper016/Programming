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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        while(!q.empty()){
            int n = q.size();
            int mx=INT_MIN;
            for(int i=0;i<n;i++){
               auto tp = q.front();
                q.pop();
                if(mx<tp->val) mx = tp->val;
                
                if(tp->left) q.push(tp->left);
                if(tp->right) q.push(tp->right);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};
