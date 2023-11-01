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
    void inorder(TreeNode* root,unordered_map<int,int> &mp){
        if(root==NULL) return;
        if(root->left) inorder(root->left,mp);
        mp[root->val]++;
        if(root->right) inorder(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        inorder(root,mp);
        vector<int> ans;
        int mx=0;
        for(auto it: mp){
            if(it.second>mx){
                mx = it.second;
            }
        }
        
        for(auto it: mp){
            if(it.second==mx){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
