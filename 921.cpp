class Solution {
public:
    int minAddToMakeValid(string s) {
    
        int count = 0;
        stack<char> st;
    
    for(int idx = 0; idx < s.size(); idx++){
        char ch = s[idx];
        if(st.size() > 0){
            if(ch == '(')
                st.push(ch);

            else if (ch == ')' && st.top() == '(')
                st.pop();
            
            else count++;
        }
        else if(ch == '(' || ch == ')'){
            st.push(ch);
        }
    }
    
    while(st.size() != 0){
        count++;
        st.pop();
    }
        
        return count;
    }
};
