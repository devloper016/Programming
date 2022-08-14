class Solution{

  public:
    int sol(int arr[],int n){
        int sum=0,mn= INT_MAX;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }
        for(int j=1;j<=sum;j++){
            dp[0][j] = 0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<= j ){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        for(int i=0;i<=sum/2;i++){
            if(dp[n][i] != 0){
                mn = min(mn,sum-2*i);
            }
        }
        return mn;
    }
	int minDifference(int arr[], int n)  { 
	    return sol(arr,n);
	} 
};
