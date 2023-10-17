class Solution {
public:
    int findRoot(int n,vector<int> &leftChild,vector<int> &rightChild){
        set<int> st;
        st.insert(leftChild.begin(),leftChild.end());
        st.insert(rightChild.begin(),rightChild.end());
        for(int i=0;i<n;i++){
            if(st.find(i)==st.end()) return i;
        }
        return -1;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = findRoot(n,leftChild,rightChild);
        if(root == -1) return false;
        
        unordered_set<int> s;
        stack<int> st;
        s.insert(root);
        st.push(root);
        
        while(!st.empty()){
            int node = st.top();
            st.pop();
            int child[] {leftChild[node],rightChild[node]};
            for(int c:child){
                if(c!= -1){
                    if(s.find(c)!=s.end()) return false;
                        st.push(c);
                        s.insert(c);
                }
            }
        }
        return s.size()==n;
    }
};
