class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26,0);
        int  m = tasks.size();
        for(int i=0;i<m;i++){
            mp[tasks[i]-'A']++;
        }
        int cnt=0,mx=0;
        for(int i=0;i<26;i++){
            mx+=mp[i];
        }
        int ans=0;
        while(mx){
            int c=0;
            sort(mp.begin(),mp.end(),greater());
            for(int i=0;i<26;i++){
                if(mp[i]>0){
                    ans++;
                    mp[i]--;
                    c++;
                }
                if(c>n) break;
            }
            if(c==0) break;
            if(c<=n){
                //cout<<(n-c+1)<<'\n';
                ans+=(n-c+1);
            }
            cnt=c;
            mx--;
        }
        ans -=(n-cnt+1);
        return ans;
    }
};
