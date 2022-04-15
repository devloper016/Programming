class Solution {
public:
    void traverse(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        for(int i=0;i<root->children.size();i++){
            traverse(root->children[i],ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        traverse(root,ans);
        return ans;
    }
};
