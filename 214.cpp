class Solution {
public:
    string shortestPalindrome(string s) {
        string st = s;
        reverse(st.begin(),st.end());
        
        string ans  = s+"#"+st;
        vector<int> p(ans.size(),0);
        for(int i=1;i<ans.size();i++){
            int j = p[i-1];
            while(j>0 && ans[i]!=ans[j]) j = p[j-1];
            
            if(ans[i]==ans[j]) j++;
            p[i] = j;
        }
        return st.substr(0,st.size()-p[ans.size()-1])+s;
    }
};
