class Solution {
public:
    bool isValid(string s) {
unordered_map<char,int>symbol={{'(',-3},{'{',-2},{'[',-1},{')',3},{'}',2},{']',1}};
        stack<int> st;
        for(auto bracket : s){
            if(symbol[bracket]<0){
                st.push(bracket);
            }else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(symbol[bracket]+symbol[top] !=0){
                    return false;
                }
            }
        }
       if(st.empty()) return true;
        return false;
    }
};
