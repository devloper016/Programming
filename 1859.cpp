class Solution {
public:
    string sortSentence(string s) {
        string r="";
        string ans="";
        map<int,string> m;
        for(int i=0;i<s.size();i++)
        { if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
        {
            r+=s[i];}
          else if(s[i]>=48 && s[i]<=57)
          {
              m[s[i]-'0']=r;
           r="";}
           }
      for(auto it=m.begin();it!=m.end();it++)
          ans+=it->second+" ";
        return ans.substr(0,ans.size()-1);
    }
};
