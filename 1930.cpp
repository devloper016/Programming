class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> st;
        for(int i=0;i<s.size();i++) st.insert(s[i]);
        int n = s.size();
        int ans=0;
        for(auto it: st){
            int i= -1;
            int j=0;
            for(int k=0;k<n;k++){
                if(s[k]==it){
                    if(i== -1) i=k;
                    j=k;
                }
            }
            unordered_set<char> t;
            for(int k=i+1;k<j;k++)t.insert(s[k]);
            ans+=t.size();
        }
        return ans;
    }
};
