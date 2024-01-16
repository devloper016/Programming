class Solution {
public:
    vector<int> lp(string &p){
        int m = p.size();
        vector<int> lps(m,0);
        int len=0;
        int i=1;
        while(i<m){
            if(p[i]==p[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len!=0){
                    len = lps[len-1];
                }
                else{
                    lps[i] =0;
                    i++;
                }
            }
        }
        return lps;
    }
    
    vector<int> kmp(string &s,string &p){
        int m = p.size(),n=s.size();
        vector<int> lps = lp(p);
        vector<int> res;
        
        int i=0,j=0;
        while(i<n){
            if(s[i]==p[j]){
                i++;
                j++;
            }
            if(j==m){
                res.push_back(i-j);
                j = lps[j-1];
            }
            else if(j<m && s[i]!=p[j]){
                if(j!=0){
                    j = lps[j-1];
                }
                else i++;
            }
        }
        return res;
    }
    
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> v1 = kmp(s,a);
        vector<int> v2 = kmp(s,b);
        
        vector<int> ans;
        int j=0;
        cout<<v2.size()<<'\n';
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<'\n';
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        for(int i=0;i<v1.size();i++){
            while(j<v2.size() && v1[i]>v2[j] && abs(v1[i]-v2[j])>k) j++;
            if(j<v2.size() && abs(v1[i]-v2[j])<=k) ans.push_back(v1[i]);
        }
        return ans;
    }
};
