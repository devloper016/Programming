class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_map<string,bool> mp;
        for(int i=0;i<ideas.size();i++){
            mp[ideas[i]]=true;
        }
        vector<vector<long long>> v(26,vector<long long>(26,0));
        for(int i=0;i<ideas.size();i++){
            string w = ideas[i].substr(1);
            int n = ideas[i][0]-'a';
            for(int j=0;j<26;j++){
                char y = j+'a';
                string tmp = y+w;
                if(mp.count(tmp)==0){
                    v[n][j]+=1;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(i==j) continue;
                if(v[i][j]>0){
                    ans += v[i][j]*v[j][i];
                }
            }
        }
        return ans;
    }
};
