class Solution {
public:
    bool chk(string a,string b){
        int m = a.size();
        int n = b.size();
        for(int i=0;i<=m-n;i++){
            int j;
            for(j=0;j<n;j++){
                if(a[i+j]!= b[j]) break;
            }
            if(j==n) return true;
        }
        return false;
    }
    int repeatedStringMatch(string a, string b) {
        int m = a.size();
        int n = b.size();
        int ans= 1;
        string tmp = a;
        while(a.size()<b.size()){
            a += tmp;
            ans++;
        }
        if(chk(a,b)){
            return ans;
        }
        if(chk(a+tmp,b)){
            return ans+1;
        }
        return -1;
    }
};
