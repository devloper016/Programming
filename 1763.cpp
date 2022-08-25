class Solution {
public:
    bool nice(string s){
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch>=65 && ch<=90){
                ch += 32;
            }
            else{
                ch -= 32;
            }
            if(s.find(ch)==string ::npos) return false;
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        string res="";
        int n = s.size();
        for(int i=0;i<n;i++){
            string t="";
            t += s[i];
            for(int j=i+1;j<n;j++){
                t += s[j];
                if(nice(t) && t.size()>res.size()) res = t;
            }
        }
        return res;
    }
};
