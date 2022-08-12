int dp[1001][1001];
int sol(vector<int> &A,vector<int> &B, int C,int n){
    if(n==0 || C==0){
        return 0;
    }
    if(dp[n][C]!= -1){
        return dp[n][C];
    }
    
    if(B[n-1]<=C){
        return dp[n][C] = max(A[n-1]+sol(A,B,C-B[n-1],n-1),sol(A,B,C,n-1));
    }
    else{
        return dp[n][C] = sol(A,B,C,n-1);
    }
}

int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int n = A.size();
    memset(dp,-1,sizeof dp);
    return sol(A,B,C,n);
}

