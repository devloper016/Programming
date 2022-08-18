class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int k = p.size();
        unordered_map<char,int> mp;
        int i=0,j=0;
        for(int z=0;z<k;z++){
            mp[p[z]]++;
        }
        int count=mp.size();
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    // cout<<count;
                    count--;
                }
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(count==0){
                    ans.push_back(i);
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
