class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();
        if(n%k) return false;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>0){
                int c = it->second;
                for(int i=0;i<k;i++){
                    if(mp[it->first+i]<c) return false;
                    mp[it->first+i]-=c;
                }
            }
        }
        return true;
    }
};
