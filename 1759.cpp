class Solution {
public:
    int mod = 1e9+7;
    int countHomogenous(string s) {
        int n = s.size();
        vector<int> v(n,1);
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                v[i]= (v[i]%mod+(v[i-1]%mod))%mod;
            } 
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans = (ans%mod+v[i]%mod)%mod;
        }
        return ans%mod;
    }
};
