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
    TreeNode* constructMaximumBinaryTree(vector<int>  nums) {
        int n = nums.size();
        if(n==0) return NULL;
        int mx = *max_element(nums.begin(),nums.end());
        int id = max_element(nums.begin(),nums.end())-nums.begin();
        TreeNode* root = new TreeNode(mx);
        
        root->left = constructMaximumBinaryTree({nums.begin(),nums.begin()+id});
        root->right = constructMaximumBinaryTree({nums.begin()+id+1,nums.end()});
        return root;
    }
};
