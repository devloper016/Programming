class Solution {
public:
    TreeNode* att(vector<int>&nums,int s,int e){
        if(s>e){
            return NULL;
        }
        int mid = s+(e-s)/2;
        int rootdata = nums[mid];
        TreeNode* root = new TreeNode(rootdata);
        root->left =  att(nums,s,mid-1);
       root-> right =  att(nums,mid+1,e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size()-1;
        return att(nums,0,n);
    }
};
