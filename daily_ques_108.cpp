class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return tree(nums,0,nums.size()-1);
    }
    TreeNode *tree(vector<int> &nums,int s,int e){
        if(s>e) return NULL;
        int mid = s + (e-s)/2;
        TreeNode *root  = new TreeNode(nums[mid]);
        root->left = tree(nums,s,mid-1);
        root->right = tree(nums,mid+1,e);
        return root;
    }
};
