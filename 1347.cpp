class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp1;
        map<char,int> mp2;
        for(auto c : s){
            mp1[c]++;
        }
        for(auto c : t){
            mp2[c]++;
        }
        int cnt=0;
        for(auto it: mp1){
            if(mp2.find(it.first)!=mp2.end()){
                if(mp2[it.first]<it.second){
                    cnt+=(it.second-mp2[it.first]);
                }
            }
            else{
                cnt+=it.second;
            }
        }
        return cnt;
    }
};
