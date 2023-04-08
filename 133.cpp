/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    void dfs(Node*cur,Node*node,vector<Node*>&v){
        v[node->val] = node;
        for(auto el: cur->neighbors){
            if(v[el->val]==NULL){
                Node* temp = new Node(el->val);
                node->neighbors.push_back(temp);
                dfs(el,temp,v);
            }
            else{
                (node->neighbors).push_back(v[el->val]);
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        vector<Node*> v(101,NULL);
        Node* cp = new Node(node->val);
        v[node->val] = cp;
        
        for(auto cur : node->neighbors){
            if(v[cur->val]==NULL){
                Node* newnode= new Node(cur->val);
                cp->neighbors.push_back(newnode);
                dfs(cur,newnode,v);
            }
            else{
                (cp->neighbors).push_back(v[cur->val]);
            }
        }
        return cp;
    }
};
