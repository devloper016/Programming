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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        stack<int> st;
        int cnt=0;
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                if(!st.empty() && cnt%2){
                    node->val = st.top();
                    st.pop();
                }
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);

                if((cnt+1)%2==1){
                    if(node->left) st.push(node->left->val);
                    if(node->right) st.push(node->right->val);
                }
            }
            cnt++;
        }
        return root;
    }
};
