class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(n==k) return "0";
        stack<char> st;
        string tmp="";
        for(int i=0;i<n;i++){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
                tmp+=st.top();
                st.pop();
        }
        if(tmp.empty()) return "0";
        reverse(tmp.begin(),tmp.end());
        int id=0;
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]!='0'){
                id=i;
                break;
            }
        }
        cout<<id<<'\n';
        if(id==0){
            if(tmp[id]!='0'){
                return tmp;
            }
            else{
                return "0";
            }
        }
        string ans = tmp.substr(id);
        return ans;
    }
};
