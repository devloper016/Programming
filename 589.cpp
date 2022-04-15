class Solution {
public:
    void traverse(Node* root, vector<int>&ans){
        if(root==NULL){
            return;
        }
         ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            traverse(root->children[i],ans);
        }
    }
    vector<int> preorder(Node* root) {
       vector<int> ans;
        traverse(root,ans);
        return ans;
    }
};
