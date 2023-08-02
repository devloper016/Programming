class Solution {
public:
    void dfs(int n,int sum ,vector<int> &ans){
        if(sum>=n) return;
        for(int i=0;i<=9;i++){
           if(sum*10+i<=n){
            ans.push_back(sum*10+i);
            dfs(n,sum*10+i,ans);
           }
        }
    }
    vector<int> lexicalOrder(int n) {
        int sum=0;
        vector<int> ans;
        for(int i=1;i<=9;i++){
            if(sum*10+i<=n){
                ans.push_back(sum*10+i);
                dfs(n,sum*10+i,ans);
            }
        }
        return ans;
    }
};
