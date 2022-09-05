/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
        int s = q.size();
            vector<int> v;
        while(s--){
            auto tmp = q.front();
            q.pop();
            v.push_back(tmp->val);
            
            for(auto it :tmp->children) q.push(it);
        }
        ans.push_back(v);
        }     
        return ans;
    }
};
