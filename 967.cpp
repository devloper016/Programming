class Solution {
public:
    void dfs(int n,int k,int num,vector<int> &ans){
        if(n==0){
            ans.push_back(num);
            return;
        }
        int last= num%10;
        if(last>=k){
            dfs(n-1,k,num*10+last-k,ans);
        }
        if(k>0 && last+k<10) dfs(n-1,k,num*10+last+k,ans);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        if(n==1) ans.push_back(0);
        for(int i=1;i<10;i++){
            dfs(n-1,k,i,ans);
        }
        return ans;
    }
};
