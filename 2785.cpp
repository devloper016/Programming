class Solution {
public:
    string sortVowels(string s) {
        multiset<char> st;
        set<char> t = {'a','e','i','o','u','A','E','I','O','U'};
        int n = s.size();
        for(int i=0;i<n;i++){
            if(t.find(s[i])!=t.end()){
                st.insert(s[i]);
            }
        }
        string ans="";
        // for(auto it : st) cout<<it<<" ";
        for(int i=0;i<n;i++){
            if(t.find(s[i]) !=t.end()){
                ans+=*st.begin();
                st.erase(st.begin());
            }
            else ans+=s[i];
        }
        return ans;
    }
};
