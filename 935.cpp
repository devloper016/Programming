class Solution {
public:
    vector<vector<int>> grid = {
        {4, 6},
        {6, 8},
        {7, 9},
        {4, 8},
        {3, 9, 0},
        {},
        {1, 7, 0},
        {2, 6},
        {1, 3},
        {2, 4}
    };
    int mod = 1e9+7;
    vector<vector<int>> memo;
    
    int dp(int re,int sq){
        if(re==0) return 1;
        
        if(memo[re][sq]!= -1){
            return memo[re][sq];
        }
        int res=0;
        for(auto it: grid[sq]){
            res = (res+dp(re-1,it))%mod;
        }
        
        memo[re][sq] = res%mod;
        return res;
    }
    int knightDialer(int n) {
        memo = vector(n+1,vector(10,-1));
        int ans=0;
        for(int i=0;i<10;i++){
            ans = (ans+dp(n-1,i))%mod;
        }
        return ans;
    }
};
