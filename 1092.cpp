class Solution {
public:
    int dp[1001][1001];
    string lcs(string &s1, string &s2,int m,int n){
        for(int i=0;i<=m;i++){
            dp[i][0] = 0;
        }
        for(int j=0;j<=n;j++){
            dp[0][j] = 0; 
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]== s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int i=m,j=n;
        string s="";
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                s+=s1[i-1];
                i--;
                j--;
            }
            else{
                if(dp[i-1][j]<dp[i][j-1]){
                    s += s2[j-1];
                    j--;
                }
                else{
                    s+= s1[i-1];
                    i--;
                }
            }
        }
        
        while(i>0){
            s += s1[i-1];
            i--;
        }
        while(j>0){
            s += s2[j-1];
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string shortestCommonSupersequence(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        return lcs(s1,s2,m,n);
    }
};
