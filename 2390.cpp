class Solution {
public:
    string removeStars(string s) {
       stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res = "";
        while(st.size()>0){
            char tmp = st.top();
            st.pop();
            res += tmp;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
