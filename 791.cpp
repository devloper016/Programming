class Solution {
public:
    string customSortString(string order, string s) {
        int n = s.size();
        map<int,char> mp;
        string st="";
        for(int i=0;i<order.size();i++){
            mp[i]=order[i];
        }
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto it:mp){
            for(int i=0;i<m[it.second];i++){
                st+=it.second;
            }
        }
        for(auto it: m){
            if(st.find(it.first)==string::npos){
                for(int i=0;i<it.second;i++) st+=it.first;
            }
        }
        return st;
    }
};
