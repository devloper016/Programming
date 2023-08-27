class Solution {
public:
    int dp[2001][2001];
    unordered_map<int,int> mp;
    
    bool sol(vector<int>&stones,int index,int prevJump){
        int n = stones.size();
        if(index==n-1) return 1;
        
        if(dp[index][prevJump]!= -1) return dp[index][prevJump];
        int ans=0;
        for(int nxt= prevJump-1;nxt<=prevJump+1;nxt++){
            
            if(nxt>0 && mp.find(stones[index]+nxt)!=mp.end()){
                ans = ans || sol(stones,mp[stones[index]+nxt],nxt);
            }
        }
        return dp[index][prevJump] = ans;
    }
        
    bool canCross(vector<int>& stones) {
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<stones.size();i++){
            mp[stones[i]] = i;
        }
        
        return sol(stones,0,0);
    }
};
