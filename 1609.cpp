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
    bool isEvenOddTree(TreeNode* root) {
        int cnt=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int> v;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(cnt%2){
                if(v.size()==1){
                    if(v[0]%2!=0){
                        cout<<"1";
                        return false;
                    }
                    cnt++;
                }
                else{
                  for(int i=0;i<s-1;i++){
                    if(v[i]<=v[i+1]){
                        cout<<"2";
                        return false;
                    }
                    if(v[i]%2!=0){
                        cout<<"3";
                        return false;
                    }
                }
                if(v[s-1]%2 !=0){
                        cout<<"4";
                        return false;
                    }
                cnt++;
                }
            }
            else{
                if(v.size()==1){
                    if(v[0]%2==0){
                        cout<<"5";
                        return false;
                    }
                    cnt++;
                }
                else{
                for(int i=0;i<s-1;i++){
                    if(v[i]>=v[i+1]){
                        cout<<"6";
                        return false;
                    }
                    if(v[i]%2==0){
                        cout<<"7";
                        return false;
                    }
                }
                if(v[s-1]%2==0){
                        cout<<"8";
                        return false;
                    }
                cnt++;
                }
            }
        }
        return true;
    }
};
