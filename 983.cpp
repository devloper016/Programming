class Solution {
public:
    int sol(int n,vector<int> &days,vector<int> &costs,vector<int>&dp,int index){
        if(index>=n) return 0;
        
        if(dp[index]!= -1) return dp[index];
        
        int op1 = costs[0]+sol(n,days,costs,dp,index+1);
        
        int i;
        for(i=index;i<n&&days[i]<days[index]+7;i++);
        int op2 = costs[1]+sol(n,days,costs,dp,i);
        
        for(i=index;i<n&&days[i]<days[index]+30;i++);
        int op3 = costs[2]+sol(n,days,costs,dp,i);
        
        dp[index] = min(op1,min(op2,op3));
        
        return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1,-1);
        return sol(n,days,costs,dp,0);
        
    }
};
