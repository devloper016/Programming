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
    
    TreeNode* dfs(int v,unordered_map<int,int> &lc,unordered_map<int,int> &rc){
        TreeNode* root = new TreeNode(v);
        if(lc.count(v)) root->left = dfs(lc[v],lc,rc);
        if(rc.count(v)) root->right = dfs(rc[v],lc,rc);
        return root;
    }
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        set<int> st;
        int n = descriptions.size();
        unordered_map<int,int> lc,rc;
        for(int i=0;i<n;i++){
            st.insert(descriptions[i][1]);
            if(descriptions[i][2]==1){
                lc[descriptions[i][0]] = descriptions[i][1];
            }
            else rc[descriptions[i][0]] = descriptions[i][1];
        }
        int v = -1;
        for(auto &a : descriptions){
                if(st.find(a[0])==st.end()){
                    v = a[0];
                    break;
                }
            }
        return dfs(v,lc,rc);
    }
};
