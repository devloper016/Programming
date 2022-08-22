class Solution {
public:
    vector<vector<int>> ans;
    void sol(TreeNode* root,int targetSum,vector<int> &res,int sum){
        if(root==nullptr) return;
        sum += root->val;
        res.push_back(root->val);
        if(!root->left&& !root->right&& sum==targetSum){
            ans.push_back(res);
        }
        sol(root->left,targetSum,res,sum);
        sol(root->right,targetSum,res,sum);
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> res;
        sol(root,targetSum,res,0);
        return ans;
    }
};
