class Solution {
public:
    bool sub(string &s,string &t){
        int n = s.size(),m=t.size();
        if(n>m) return false;
        int i=0,j=0;
        while(i<n &&j<m){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==n && j<=m) return true;
        return false;
    }
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        int n = words.size();
        sort(chars.begin(),chars.end());
        for(auto it: words){
            sort(it.begin(),it.end());
            if(sub(it,chars)){
                // cout<<it<<" ";
                ans+=it.size();
            }
        }
        return ans;
    }
};
