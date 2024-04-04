class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        if(s.size()<=1) return 0;
        int n = s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(s[i]);
            if(s[i]==')') st.pop();
            int m = st.size();
            ans = max(ans,m);
        }
        return ans;
    }
};
