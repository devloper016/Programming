class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        int n = hand.size();
        if(n%g!=0) return false;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        for(auto it = mp.begin();it!=mp.end();it++){
            if(it->second>0){
                int c = it->second;
                for(int i=0;i<g;i++){
                    if(mp[it->first+i]<c) return false;
                    mp[it->first+i]-=c;
                }
            }
        }
        return true;
    }
};
