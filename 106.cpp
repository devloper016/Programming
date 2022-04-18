class Solution {
public:
    TreeNode* buildTreeHelper(vector<int> inOrder, vector<int> postOrder,int inS, int inE, int postS, int postE){
        if(inS > inE){
            return NULL;
        }
        int rootData = postOrder[postE];
        int rootIndex = -1;
        for(int i= inS;i<=inE;i++){
            if(inOrder[i] == rootData){
                rootIndex = i;
                break;
            }
        }
        
        int leftInS = inS;
        int leftInE = rootIndex - 1;
        int leftPostS = postS;
        int leftPostE = leftPostS + leftInE - leftInS;
        
        int rightInS = rootIndex + 1;
        int rightInE = inE;
        int rightPostS = leftPostE + 1;
        int rightPostE = postE - 1;
        
        TreeNode* root = new TreeNode(rootData);
        root->left = buildTreeHelper(inOrder, postOrder, leftInS, leftInE, leftPostS, leftPostE);
        root->right = buildTreeHelper(inOrder, postOrder, rightInS, rightInE, rightPostS, rightPostE);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return buildTreeHelper(inorder,postorder,0,n-1,0,n-1);
    }
};
