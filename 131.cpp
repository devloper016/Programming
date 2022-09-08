class Solution {
public:
    void fun(vector<vector<string>>&ans,string &s,vector<string>&tmp,int st){
        if(st==s.size()) ans.push_back(tmp);
        for(int i=st;i<s.size();i++){
            if(ispal(s,st,i)){
                tmp.push_back(s.substr(st,i-st+1));
                fun(ans,s,tmp,i+1);
                tmp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> tmp;
        fun(ans,s,tmp,0);
        return ans;
    }
    bool ispal(string s,int st,int e){
        while(st<e){
        if(s[st++]!=s[e--]) return false;
        }  
        return true;
    }
};
